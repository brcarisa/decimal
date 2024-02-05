#include "s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  copy_decimal(result, value);

  if (get_sign(value)) {
    set_sign(result, 0);
  } else {
    set_sign(result, 1);
  }
  return 0;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int status = 1;
  int scale = get_scale(value);
  decimal_to_zero(result);
  if (result && !value.state) {
    copy_decimal(result, value);
    s21_decimal ten = {{10, 0, 0, 0}, S21_NORMAL};
    for (int i = scale; i > 0; i--) {
      s21_divout(*result, ten, result);
    }
    set_scale(result, 0);
    status = 0;
  }
  return status;
}

int s21_is_decimal_zero(s21_decimal value) {
  int zero = 0;
  if (!value.bits[0] && !value.bits[1] && !value.bits[2]) zero = 1;
  return zero;
}

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  decimal_to_zero(result);
  if ((value_1.state == S21_POS_INF && value_2.state == S21_NEG_INF) ||
      (value_1.state == S21_NEG_INF && value_2.state == S21_POS_INF)) {
    flag = 3;
    result->state = S21_NAN;
  } else if (value_1.state == S21_POS_INF || value_2.state == S21_POS_INF) {
    flag = 1;
    result->state = S21_POS_INF;
  } else if (value_1.state == S21_NEG_INF || value_2.state == S21_NEG_INF) {
    flag = 2;
    result->state = S21_NEG_INF;
  } else if (value_1.state == S21_NAN || value_2.state == S21_NAN) {
    flag = 3;
    result->state = S21_NAN;
  } else if (s21_is_decimal_zero(value_1)) {
    copy_decimal(result, value_2);
  } else if (s21_is_decimal_zero(value_2)) {
    copy_decimal(result, value_1);
  } else if (value_1.state == S21_NORMAL && value_2.state == S21_NORMAL) {
    if (get_sign(value_1) == 0 && get_sign(value_2) == 0) {
      if (get_scale(value_1) > get_scale(value_2)) {
        flag = add_help(value_1, value_2, result);
      } else {
        flag = add_help(value_2, value_1, result);
      }
    } else if (get_sign(value_1) == 1 && get_sign(value_2) == 1) {
      if (get_scale(value_1) > get_scale(value_2)) {
        flag = add_help(value_1, value_2, result);
      } else {
        flag = add_help(value_2, value_1, result);
      }
      set_sign(result, 1);
    } else {
      if (get_sign(value_1) == 1) {
        set_sign(&value_1, 0);
        flag = s21_sub(value_2, value_1, result);
      } else if (get_sign(value_2) == 1) {
        set_sign(&value_2, 0);
        flag = s21_sub(value_1, value_2, result);
      }
    }
  }
  if (!flag) {
    result->state = S21_NORMAL;
  }
  return flag;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  s21_decimal ten = {{10, 0, 0, 0}, S21_NORMAL};
  s21_decimal buff = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal one = {{1, 0, 0, 0}, S21_NORMAL};
  unsigned int rem = 0;
  decimal_to_zero(result);
  int flag = 0;
  if (value.state == S21_POS_INF || value.state == S21_NEG_INF ||
      value.state == S21_NAN) {
    flag = 1;
  } else if (get_scale(value) == 0) {
    copy_decimal(result, value);
  } else {
    s21_truncate(value, result);
    set_scale(&value, get_scale(value) - 1);
    s21_truncate(value, &value);
    buff = remain(value, ten, &buff);
    rem = buff.bits[0];
    if (get_sign(value) == 0) {
      if (rem >= 5) {
        flag = s21_add(*result, one, result);
      }
    } else if (get_sign(value) == 1) {
      if (rem >= 5) {
        flag = s21_sub(*result, one, result);
      }
    }
  }
  return flag;
}

int s21_floor(s21_decimal value, s21_decimal *result) {
  int flag = 0;
  s21_decimal one = {{1, 0, 0, 0}, S21_NORMAL};

  if (value.state == S21_POS_INF || value.state == S21_NEG_INF ||
      value.state == S21_NAN) {
    flag = 1;
  } else if (result && !value.state) {
    if (get_scale(value) == 0) {
      copy_decimal(result, value);
    } else {
      s21_truncate(value, result);
      if (get_sign(value)) {
        s21_sub(*result, one, result);
      }
    }
  }
  return flag;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  decimal_to_zero(result);
  if ((value_1.state == S21_POS_INF && value_2.state == S21_NEG_INF) ||
      (value_1.state == S21_NEG_INF && value_2.state == S21_POS_INF)) {
    flag = 3;
    result->state = S21_NAN;
  } else if (value_1.state == S21_POS_INF || value_2.state == S21_POS_INF) {
    flag = 1;
    result->state = S21_POS_INF;
  } else if (value_1.state == S21_NEG_INF || value_2.state == S21_NEG_INF) {
    flag = 2;
    result->state = S21_NEG_INF;
  } else if (value_1.state == S21_NAN || value_2.state == S21_NAN) {
    flag = 3;
    result->state = S21_NAN;
  } else if (s21_is_equal(value_1, value_2)) {
    flag = 0;
    result->state = S21_NORMAL;
  } else if (s21_is_decimal_zero(value_1) && !value_2.state) {
    copy_decimal(result, value_2);
    if (get_sign(value_2)) {
      set_sign(result, 0);
    } else {
      set_sign(result, 1);
    }
  } else if (s21_is_decimal_zero(value_2) && !value_1.state) {
    copy_decimal(result, value_1);
  } else if (value_1.state == S21_NORMAL && value_2.state == S21_NORMAL) {
    if (get_sign(value_1) == get_sign(value_2)) {
      int sign1 = get_sign(value_1);
      int sign2 = get_sign(value_2);
      set_sign(&value_1, 0);
      set_sign(&value_2, 0);
      if (s21_is_greater(value_1, value_2)) {
        flag = sub_help(value_1, value_2, result);
        set_sign(result, sign1);
      } else {
        flag = sub_help(value_2, value_1, result);
        set_sign(result, !sign2);
      }
    } else {
      set_sign(&value_2, !get_sign(value_2));
      flag = s21_add(value_1, value_2, result);
    }
    if (!flag) {
      result->state = S21_NORMAL;
    }
  }
  return flag;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag = 0;
  decimal_to_zero(result);
  s21_decimal zero = {{0, 0, 0, 0}, S21_NORMAL};
  if ((value_1.state == S21_POS_INF && value_2.state == S21_NEG_INF) ||
      (value_1.state == S21_NEG_INF && value_2.state == S21_POS_INF)) {
    flag = 2;
    result->state = S21_NEG_INF;
  } else if (value_1.state == S21_POS_INF || value_2.state == S21_POS_INF) {
    flag = 1;
    result->state = S21_POS_INF;
  } else if (value_1.state == S21_NEG_INF || value_2.state == S21_NEG_INF) {
    flag = 1;
    result->state = S21_POS_INF;
  } else if (value_1.state == S21_NAN || value_2.state == S21_NAN) {
    flag = 3;
    result->state = S21_NAN;
  } else if (s21_is_decimal_zero(value_1) || s21_is_decimal_zero(value_2)) {
    flag = 0;
  } else if (value_1.state == S21_NORMAL && value_2.state == S21_NORMAL) {
    flag = mul_help(value_1, value_2, result);
    if (get_sign(value_1) == get_sign(value_2)) {
      set_sign(result, 0);
    } else {
      set_sign(result, 1);
    }
    if (flag == 1 && get_sign(*result)) {
      result->state = S21_NEG_INF;
      flag = 2;
    } else if (flag == 1) {
      result->state = S21_POS_INF;
    } else if (flag == 3) {
      result->state = S21_NORMAL;
    }
  }

  if (s21_is_equal(*result, zero) == 1) {
    set_scale(result, 0);
    set_sign(result, 0);
  }
  return flag;
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  if (both_zeroes(value_1, value_2)) {
    return 1;
  }
  int scale_1 = get_scale(value_1);
  int scale_2 = get_scale(value_2);
  int sign_1 = get_sign(value_1);
  int sign_2 = get_sign(value_2);
  if (sign_1 != sign_2) {
    return 0;
  }
  if (mantiss_eq(value_1, value_2) == 1 && scale_1 != scale_2) {
    return 0;
  }
  equal_scale(scale_1, scale_2, &value_1, &value_2);
  if (bits_eq(value_1.bits, value_2.bits) == 1) {
    return 1;
  } else {
    return 0;
  }
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  int less = 0;
  int sign_1 = get_sign(value_1), sign_2 = get_sign(value_2);
  int scale_1 = get_scale(value_1), scale_2 = get_scale(value_2);
  equal_scale(scale_1, scale_2, &value_1, &value_2);
  if (s21_is_equal(value_1, value_2)) {
    less = 0;
  } else if (sign_1 && !sign_2) {
    less = 1;
  } else if (sign_1 == sign_2) {
    int i = 2;
    while (value_1.bits[i] == value_2.bits[i] && i > -1) i--;
    if (i > -1) less = value_1.bits[i] < value_2.bits[i];
    if (i > -1 && sign_1) less = !less;
  }
  return less;
}

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  if (both_zeroes(value_1, value_2)) {
    return 0;
  } else {
    return s21_is_less(value_2, value_1);
  }
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return s21_is_greater(value_1, value_2) || s21_is_equal(value_1, value_2);
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  if (s21_is_less(value_1, value_2) == 1 || s21_is_equal(value_1, value_2) == 1)
    return 1;
  else
    return 0;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  if (s21_is_equal(value_1, value_2) == 1)
    return 0;
  else
    return 1;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_decimal ten = {{10, 0, 0, 0}, S21_NORMAL};
  s21_decimal zero = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal for_scale = {{0, 0, 0, 0}, S21_NORMAL};
  decimal_to_zero(result);
  int flag = 0;
  if (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0) {
    flag = 3;
  } else if (value_1.state == S21_NORMAL && value_2.state == S21_NORMAL) {
    int scale_1 = get_scale(value_1), scale_2 = get_scale(value_2),
        sign_1 = get_sign(value_1), sign_2 = get_sign(value_2);
    int scale_res = 0;
    int diff_scale = (scale_1 - scale_2);
    int pos_diff = 0;
    if (diff_scale > 0) {
      pos_diff = diff_scale;
    }
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
    int check = 0;
    int sub_times = 0;
    s21_decimal tmp = {{0, 0, 0, 0}, S21_NORMAL};
    s21_decimal buff = {{0, 0, 0, 0}, S21_NORMAL};
    for (; i >= 0; i--) {
      move_left(&tmp);
      set_bit(&tmp, 0, get_bit(value_1, i));
      if (s21_is_greater_or_equal(tmp, value_2)) {
        sub_times += 1;
        move_left(result);
        set_bit(result, 0, 1);
        s21_sub(tmp, value_2, &tmp);
        set_sign(&tmp, 0);
      } else if (sub_times != 0) {
        move_left(result);
      }
    }
    set_sign(&tmp, 0);
    int count = 0;
    for_scale = tmp;
    while (s21_is_not_equal(for_scale, zero) == 1) {
      s21_divout(for_scale, ten, &for_scale);
      count++;
    }
    if (s21_is_not_equal(tmp, zero) == 1 && tmp.state == S21_NORMAL &&
        buff.state == S21_NORMAL && result->state == S21_NORMAL) {
      while (get_bit(*result, 95) != 1 && s21_is_decimal_zero(tmp) != 1) {
        mul10_for_div(&tmp, 1);
        mul10_for_div(result, 1);
        set_scale(result, 0);
        tmp = remain(tmp, value_2, &buff);
        s21_add(*result, buff, result);
        scale_res++;
        if (scale_res + pos_diff >= 28) {
          check = 1;
          break;
        }
      }
    }
    result->state = S21_NORMAL;
    if (diff_scale < 0) {
      for (; diff_scale != 0; diff_scale++) {
        mul10_for_div(result, 1);
      }
    }
    if (check == 1) {
      set_scale(result, 29 - count);
    } else
      set_scale(result, scale_res + diff_scale);
  }
  return flag;
}

int s21_divout(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0)
    return S21_NAN;
  // if()
  decimal_to_zero(result);
  int scale_1 = get_scale(value_1);
  int scale_2 = get_scale(value_2);
  int sign_1 = get_sign(value_1);
  int sign_2 = get_sign(value_2);

  if (scale_1 || scale_2) {
    set_scale(result, scale_1 - scale_2);
  }
  if (sign_1 == sign_2) {
    set_sign(result, 0);
  } else {
    set_sign(result, 1);
  }

  if (value_2.bits[3] > 0) {
    for (int k = 96; k < 128; k++) {
      set_bit(&value_2, k, 0);
    }
  }
  int i = find_first_1(value_1);
  int sub_times = 0;
  s21_decimal tmp = {{0, 0, 0, 0}, S21_NORMAL};
  for (; i >= 0; i--) {
    move_left(&tmp);
    set_bit(&tmp, 0, get_bit(value_1, i));
    if (s21_is_greater_or_equal(tmp, value_2)) {
      sub_times += 1;
      move_left(result);
      set_bit(result, 0, 1);
      s21_sub(tmp, value_2, &tmp);
      set_sign(&tmp, 0);
    } else if (sub_times != 0) {
      move_left(result);
    }
  }
  result->state = S21_NORMAL;
  return 0;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int result = 1;

  if (dst) {
    decimal_to_zero(dst);
    if (src < 0) {
      set_sign(dst, 1);
      src *= -1;
    }
    dst->bits[0] = src;
    result = 0;
  }

  return result;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int result = 1;
  int buff = 0;
  int check = 0;
  int sign = get_sign(src);
  s21_truncate(src, &src);
  if (src.bits[1] != 0 || src.bits[2] != 0) {
    check = 1;
  }
  if (src.bits[1] == 0 && src.bits[2] == 0) {
    if (src.bits[0] < 2147483648) {
      buff = src.bits[0];
      if (sign) buff = buff * -1;
      result = 0;
    }
  }
  *dst = buff;
  if (check == 1) {
    result = 1;
    *dst = 0;
  }
  return result;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (isinf(src) || isnan(src)) {
    return 1;
  }
  decimal_to_zero(dst);
  int sign = 0;
  if (src < 0) {
    sign = 1;
    src = -src;
  }
  long long int integerPart = (long long int)src;
  int exp = 0;
  while (src - ((float)integerPart / (long long int)(pow(10, exp))) != 0) {
    exp++;
    integerPart = src * (long long int)(pow(10, exp));
  }
  s21_from_int_to_decimal((int)integerPart, dst);
  if (sign) {
    s21_negate(*dst, dst);
  }
  dst->bits[3] += exp << 16;
  return 0;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int result = 0;
  if (dst) {
    double tmp = 0;
    int scale = 0;
    for (int i = 0; i < 96; i++) {
      if ((src.bits[i / 32] & (1 << i % 32)) != 0) tmp += pow(2, i);
    }
    if ((scale = (src.bits[3] & ~0x80000000) >> 16) > 0) {
      for (int i = scale; i > 0; i--) tmp /= 10.0;
    }
    *dst = (float)tmp;
    *dst *= src.bits[3] >> 31 ? -1 : 1;
  } else
    result = 1;

  return result;
}
