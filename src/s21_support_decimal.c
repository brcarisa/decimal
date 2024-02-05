#include "s21_decimal.h"

bool get_sign(s21_decimal decimal) { return ((decimal.bits[3] >> 31) & 1); }

int get_bit(s21_decimal decimal, int pos) {
  int res = 0;
  res = (decimal.bits[pos / 32] >> (pos % 32)) & 1;
  return res;
}

void set_bit(s21_decimal *decimal, int index, int bit) {
  int num_int = index / 32;
  int num_bit = index % 32;

  if (bit == 1) {
    decimal->bits[num_int] |= (1u << num_bit);
  } else {
    decimal->bits[num_int] &= (~((1u) << num_bit));
  }
  return;
}

void set_sign(s21_decimal *decimal, int sign) {
  set_bit(decimal, 127, sign);
  return;
}

void set_scale(s21_decimal *decimal, int scale) {
  for (int i = START_INFO + 16; i < START_INFO + 23; ++i) {
    set_bit(decimal, i, scale & 1);
    scale >>= 1;
  }
  return;
}

void copy_decimal(s21_decimal *dest, s21_decimal src) {
  dest->state = src.state;
  for (int i = 0; i < 4; ++i) {
    dest->bits[i] = src.bits[i];
  }
  return;
}

void decimal_to_zero(s21_decimal *decimal) {
  for (int i = 0; i < 128; ++i) {
    set_bit(decimal, i, 0);
  }
}

void move_left(s21_decimal *decimal) {
  int mid_bit = get_bit(*decimal, START_MID - 1);
  int hight_bit = get_bit(*decimal, START_HIGHT - 1);

  for (int i = 0; i < 3; ++i) {
    decimal->bits[i] <<= 1;
  }
  set_bit(decimal, START_MID, mid_bit);
  set_bit(decimal, START_HIGHT, hight_bit);
  return;
}

void move_right(s21_decimal *decimal) {
  int mid_bit = get_bit(*decimal, START_MID);
  int hight_bit = get_bit(*decimal, START_HIGHT);

  for (int i = 0; i < 3; ++i) {
    decimal->bits[i] >>= 1;
  }
  set_bit(decimal, START_MID - 1, mid_bit);
  set_bit(decimal, START_HIGHT - 1, hight_bit);
  return;
}

int get_scale(s21_decimal decimal) {
  int scale = 0;
  for (int i = START_INFO + 23; i >= START_INFO + 16; --i) {
    scale <<= 1;
    scale |= get_bit(decimal, i);
  }
  return scale;
}

int add_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  int overf = 0;
  int min_summ = 0;
  int exp1 = get_scale(value_1);
  int exp2 = get_scale(value_2);
  equal_scale(exp1, exp2, &value_1, &value_2);

  for (int i = 0; i < 96; ++i) {
    min_summ = get_bit(value_1, i) + get_bit(value_2, i) + overf;
    overf = min_summ / 2;
    set_bit(result, i, min_summ % 2);
  }

  set_scale(result, get_scale(value_1));

  if (overf == 1) {
    if (get_scale(value_2) > 0) {
      set_scale(result, get_scale(value_2) - 1);
      move_right(result);
      set_bit(result, 95, overf);
    } else {
      flag = 1;
    }
  }
  return flag;
}

int sub_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int bit_res = 0;
  int buff = 0;
  int buff_res = 0;
  int bit1 = 0;
  int bit2 = 0;
  s21_decimal trash = {{0, 0, 0, 0}, S21_NORMAL};
  s21_truncate(value_1, &trash);
  int exp1 = get_scale(value_1);
  int exp2 = get_scale(value_2);
  if (exp1 > exp2)
    set_scale(result, exp1);
  else if (exp2 > exp1)
    set_scale(result, exp2);
  equal_scale(exp1, exp2, &value_1, &value_2);
  for (int i = 0; i < 96; ++i) {
    bit1 = get_bit(value_1, i);
    bit2 = get_bit(value_2, i);
    buff_res = bit1 - bit2 - buff;
    buff = buff_res < 0 ? 1 : 0;
    bit_res = buff ? 2 + buff_res : buff_res;
    set_bit(result, i, bit_res);
  }
  return 0;
}

int mul_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  s21_decimal temp = {{0, 0, 0, 0}, S21_NORMAL};
  decimal_to_zero(result);
  int scale_sum = get_scale(value_1) + get_scale(value_2);
  set_scale(result, scale_sum);
  result->state = S21_NORMAL;

  for (int i = 0; i < 96 && !flag; ++i) {
    if (get_bit(value_2, i)) {
      copy_decimal(&temp, value_1);
      set_sign(&temp, 0);
      set_scale(&temp, scale_sum);
      for (int j = 0; j < i && !flag; ++j) {
        if (!get_bit(temp, 95)) {
          move_left(&temp);
        } else if (get_scale(temp) > 0) {
          set_scale(&temp, get_scale(temp) - 1);
        } else {
          if (get_sign(value_1) == get_sign(value_2)) {
            flag = 1;
          } else {
            flag = 2;
          }
        }
      }
      s21_add(temp, *result, result);
    }
  }
  if (flag == 1 || flag == 2) {
    decimal_to_zero(result);
  }
  return flag;
}

int find_first_1(s21_decimal dec) {
  int bit = 0;
  for (int i = 95; i >= 0; i--) {
    if (get_bit(dec, i) == 1) {
      bit = i;
      break;
    }
  }
  return bit;
}

bool bits_eq(const unsigned bits_a[4], const unsigned bits_b[4]) {
  int flag = 0;
  if (bits_a[0] == bits_b[0] && bits_a[1] == bits_b[1] &&
      bits_a[2] == bits_b[2] && bits_a[3] == bits_b[3]) {
    flag = 1;
  }
  return flag;
}

bool mantiss_eq(s21_decimal value_1, s21_decimal value_2) {
  int flag = 0;
  if (value_1.bits[0] == value_2.bits[0] &&
      value_1.bits[1] == value_2.bits[1] &&
      value_1.bits[2] == value_2.bits[2]) {
    flag = 1;
  }
  return flag;
}

int both_zeroes(s21_decimal value_1, s21_decimal value_2) {
  if (value_1.bits[0] == 0 && value_1.bits[1] == 0 && value_1.bits[2] == 0 &&
      value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0) {
    return 1;
  } else {
    return 0;
  }
}

int equal_scale(unsigned exp1, unsigned exp2, s21_decimal *value_1,
                s21_decimal *value_2) {
  int max = 0;
  int exp_diff = 0;
  s21_decimal buff = {{0, 0, 0, 0}, S21_NORMAL};
  if (exp1 == exp2) {
    return max = exp1;
  }
  if ((exp1 || exp2) && exp1 > exp2) {
    max = exp1;
    exp_diff = exp1 - exp2;
    while (exp_diff > 0) {
      buff = *value_2;
      if (mul10_for_div(value_2, 1) == 1) {
        *value_2 = buff;
        break;
      }
      set_scale(value_2, (get_scale(*value_2) + 1));
      exp_diff--;
    }
    if (exp_diff > 0) {
      set_scale(value_1, exp_diff);
      buff = *value_1;
      bank_round(buff, value_1);
      max = max - exp_diff;
    }
  } else if ((exp2 || exp1) && exp2 > exp1) {
    max = exp2;
    exp_diff = exp2 - exp1;
    while (exp_diff > 0) {
      buff = *value_1;
      if (mul10_for_div(value_1, 1) == 1) {
        *value_1 = buff;
        break;
      }
      set_scale(value_1, (get_scale(*value_1) + 1));
      exp_diff--;
    }
    if (exp_diff > 0) {
      set_scale(value_2, exp_diff);
      buff = *value_2;
      bank_round(buff, value_2);
      max = max - exp_diff;
    }
  }
  return max;
}

void bank_round(s21_decimal value, s21_decimal *result) {
  s21_decimal ostatok = {{5, 0, 0, 0}, S21_NORMAL};
  s21_decimal mod_res = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal one = {{1, 0, 0, 0}, S21_NORMAL};
  decimal_to_zero(result);
  int scale_1 = get_scale(value);
  int sign_1 = get_sign(value);
  if (sign_1 == 1) {
    s21_negate(value, &value);
  }
  s21_truncate(value, result);
  s21_decimal for_mod = {{pow(10, scale_1), 0, 0, 0}, S21_NORMAL};
  mod_res = remain(value, for_mod, &mod_res);
  unsigned int tmp = mod_res.bits[0], k = 0;
  set_scale(&ostatok, scale_1);
  while (tmp != 0) {
    k += 1;
    tmp /= 10;
  }
  s21_decimal for_mul = {{pow(10, k - 1), 0, 0, 0}, S21_NORMAL};
  s21_mul(for_mul, ostatok, &ostatok);
  if (s21_is_less(ostatok, mod_res) == 1) {
    s21_add(*result, one, result);
  }
  set_scale(result, 0);
  if (sign_1) {
    s21_negate(*result, result);
  }
}

int mul10_for_div(s21_decimal *value_1, int exp) {
  int flag = 0;
  if (value_1->bits[2] >= 429496730) {
    return S21_POS_INF;
  }
  s21_decimal ten = {{10, 0, 0, 0}, S21_NORMAL};
  while (exp > 0) {
    flag = s21_mul(*value_1, ten, value_1);
    exp--;
  }
  return flag;
}

s21_decimal remain(s21_decimal value_1, s21_decimal value_2,
                   s21_decimal *result) {
  decimal_to_zero(result);
  int scale_1 = get_scale(value_1);
  int scale_2 = get_scale(value_2);
  int sign_1 = get_sign(value_1);
  int sign_2 = get_sign(value_2);
  int diff_scale = (scale_1 - scale_2);
  if (scale_1 || scale_2) {
    set_scale(result, diff_scale);
  }
  if (sign_1 == sign_2) {
    set_sign(result, 0);
  } else {
    set_sign(result, 1);
  }
  if (value_2.bits[3] > 0) {
    set_scale(&value_2, 0);
    set_sign(&value_2, 0);
  }
  int i = find_first_1(value_1);
  int sub_times = 0;
  s21_decimal tmp = {{0, 0, 0, 0}, S21_NORMAL};
  for (; i >= 0; i--) {
    move_left(&tmp);
    set_bit(&tmp, 0, get_bit(value_1, i));
    if (s21_is_greater_or_equal(tmp, value_2)) {
      sub_times++;
      move_left(result);
      set_bit(result, 0, 1);
      s21_sub(tmp, value_2, &tmp);
    } else if (sub_times != 0) {
      move_left(result);
    }
  }
  set_sign(&tmp, 0);
  tmp.state = S21_NORMAL;
  return tmp;
}
