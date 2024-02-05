#ifndef S21_DECIMAL_H_
#define S21_DECIMAL_H_

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define START_LOW 0
#define START_MID 32
#define START_HIGHT 64
#define START_INFO 96

typedef enum {
  S21_NORMAL,
  S21_POS_INF,
  S21_NEG_INF,
  S21_NAN,
} State;

typedef struct {
  unsigned int bits[4];
  State state;
} s21_decimal;

int get_scale(s21_decimal decimal);
int get_bit(s21_decimal num, int pos);
bool get_sign(s21_decimal decimal);
bool mantiss_eq(s21_decimal value_1, s21_decimal value_2);
void set_scale(s21_decimal *decimal, int scale);
void set_sign(s21_decimal *decimal, int sign);
void set_bit(s21_decimal *decimal, int index, int bit);
void copy_decimal(s21_decimal *dest, s21_decimal src);
void decimal_to_zero(s21_decimal *decl);
void move_left(s21_decimal *decimal);
void move_right(s21_decimal *decimal);
int add_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int sub_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int mul_help(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int mul10_for_div(s21_decimal *value_1, int exp);
void bank_round(s21_decimal value, s21_decimal *result);
int equal_scale(unsigned exp1, unsigned exp2, s21_decimal *value_1,
                s21_decimal *value_2);
bool bits_eq(const unsigned bits_a[4], const unsigned bits_b[4]);

int both_zeroes(s21_decimal value_1, s21_decimal value_2);
int find_first_1(s21_decimal dec);
s21_decimal remain(s21_decimal value_1, s21_decimal value_2,
                   s21_decimal *result);
int s21_is_decimal_zero(s21_decimal value);

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_is_greater(s21_decimal a, s21_decimal b);
int s21_is_greater_or_equal(s21_decimal a, s21_decimal b);
int s21_is_less(s21_decimal a, s21_decimal b);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);

int s21_negate(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);

int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);

int s21_divout(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

#endif
