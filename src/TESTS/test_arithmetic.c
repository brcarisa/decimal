#include "tests.h"

START_TEST(s21_add_1) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 3;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_2) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 3;
  // src2 = 2;
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_3) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 3;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_4) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_5) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -9878798789;
  // src2 = -3;
  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001100110100101000000111001000;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_6) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_7) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 6521;
  // src2 = 74121;
  src1.bits[0] = 0b00000000000000000001100101111001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000010010000110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000010011101100000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_8) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 4;
  // src2 = 97623323;
  src1.bits[0] = 0b00000000000000000000000000000100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000101110100011001110100011011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000101110100011001110100011111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_9) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 65658654;
  // src2 = 5;
  src1.bits[0] = 0b00000011111010011101111100011110;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000101;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000011111010011101111100100011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_10) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -364748;
  // src2 = 1;
  src1.bits[0] = 0b00000000000001011001000011001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000001011001000011001011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_11) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1;
  // src2 = 98745654321;
  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11111101101100110001110000110001;
  src2.bits[1] = 0b00000000000000000000000000010110;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111101101100110001110000110010;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_12) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -9878798789;
  // src2 = -3;
  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001100110100101000000111001000;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_13) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 9999999999999999999;
  // src2 = 1;
  src1.bits[0] = 0b10001001111001111111111111111111;
  src1.bits[1] = 0b10001010110001110010001100000100;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b10001001111010000000000000000000;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_14) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 18446744073709551615;
  // src2 = 1;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000001;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_15) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 18446744073709551615.0;
  // src2 = 965453154;
  src1.bits[0] = 0b11111111111111111111111111110110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000001001;
  src1.bits[3] = 0b00000000000000010000000000000000;
  src2.bits[0] = 0b00111001100010111010010101100010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00111111011101000111010111001010;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000001010;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_16) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -545454512454545.35265454545645;
  // src2 = 54564654;
  src1.bits[0] = 0b10000010111000100101101011101101;
  src1.bits[1] = 0b11111001111010000010010110101101;
  src1.bits[2] = 0b10110000001111101111000010010100;
  src1.bits[3] = 0b10000000000011100000000000000000;
  src2.bits[0] = 0b00000011010000001001011100101110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01110001001010101101101011101101;
  origin.bits[1] = 0b00101110001111001110000111111000;
  origin.bits[2] = 0b10110000001111101110111101101101;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_17) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7961327845421.879754123131254;
  // src2 = 0;
  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_18) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_19) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_20) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_21) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7922816251427554395;
  // src2 = 65645646;
  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01100010111100011011000010101001;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_22) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 665464545;
  // src2 = 8798232189789785;
  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00010000010100101110011001011001;
  src2.bits[1] = 0b00000000000111110100000111110010;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00110111111111010001010100111010;
  origin.bits[1] = 0b00000000000111110100000111110010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_23) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2.7986531268974139743;
  // src2 = 9.979623121254565121244554;
  src1.bits[0] = 0b11111110100100001101100101011111;
  src1.bits[1] = 0b10000100011001000010000111101000;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;
  src2.bits[0] = 0b11010100101011100011110110001010;
  src2.bits[1] = 0b01110100000101000010011110100011;
  src2.bits[2] = 0b00000000000010000100000101000100;
  src2.bits[3] = 0b00000000000110000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b10011010010111001101001011101010;
  origin.bits[1] = 0b10111110010100100100110100010011;
  origin.bits[2] = 0b00000000000010101001000111100111;
  origin.bits[3] = 0b00000000000110000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_24) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -9798956154578676.797564534156;
  // src2 = -2156878451.854764;
  src1.bits[0] = 0b01010100010000000011110110001100;
  src1.bits[1] = 0b10001011010100100000010101011001;
  src1.bits[2] = 0b00011111101010011000000110101101;
  src1.bits[3] = 0b10000000000011000000000000000000;
  src2.bits[0] = 0b01100101111100100100110110101100;
  src2.bits[1] = 0b00000000000001111010100110101011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000001100000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11010101111011100000000010001100;
  origin.bits[1] = 0b01111000000001011001100110101101;
  origin.bits[2] = 0b00011111101010011000001000100010;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_25) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0.5456465465486476846545465485;
  // src2 = 0.68985125146545154;
  src1.bits[0] = 0b00001011000011110111000010001101;
  src1.bits[1] = 0b10010110101100000101100101010001;
  src1.bits[2] = 0b00010001101000010111101110000001;
  src1.bits[3] = 0b00000000000111000000000000000000;
  src2.bits[0] = 0b00010111001001010100110000000010;
  src2.bits[1] = 0b00000000111101010001010110011011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000100010000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01110000110111010100000010001101;
  origin.bits[1] = 0b01011010100111011110001100001010;
  origin.bits[2] = 0b00100111111010111100110001011010;
  origin.bits[3] = 0b00000000000111000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_26) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = -37986322154988653.784354545765;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b01001111101101000110000001100101;
  src2.bits[1] = 0b01000010001101101011011001100001;
  src2.bits[2] = 0b01111010101111011000110010011010;
  src2.bits[3] = 0b10000000000011000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001111101101000110000001100101;
  origin.bits[1] = 0b01000010001101101011011001100001;
  origin.bits[2] = 0b01111010101111011000110010011010;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_27) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -79228162514264337593543950335;
  // src2 = 79228162514264337593543950335;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_28) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 546378;
  // src2 = 0;
  src1.bits[0] = 0b00000000000010000101011001001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000010000101011001001010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_29) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 8976545415646545.5746845454;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11011101111000010000101100001110;
  src2.bits[1] = 0b00000101010000010110101000000010;
  src2.bits[2] = 0b00000000010010100100000010010011;
  src2.bits[3] = 0b00000000000010100000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11011101111000010000101100001110;
  origin.bits[1] = 0b00000101010000010110101000000010;
  origin.bits[2] = 0b00000000010010100100000010010011;
  origin.bits[3] = 0b00000000000010100000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_add_30) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_add(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_1) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 5;
  // src2 = 3;
  src1.bits[0] = 0b00000000000000000000000000000101;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_2) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 3;
  // src2 = 6;
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_3) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 8;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000001000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000001000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_4) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000111;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_5) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -3187878;
  // src2 = 0;
  src1.bits[0] = 0b00000000001100001010010010100110;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000001100001010010010100110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST
START_TEST(s21_sub_6) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 3;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_7) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 787891;
  // src2 = 238471;
  src1.bits[0] = 0b00000000000011000000010110110011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000111010001110000111;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000010000110001000101100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_8) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 9;
  // src2 = 18571145;
  src1.bits[0] = 0b00000000000000000000000000001001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000001000110110101111110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000001000110110101111110000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_9) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1849687;
  // src2 = 6;
  src1.bits[0] = 0b00000000000111000011100101010111;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000111000011100101010001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_10) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -3187878;
  // src2 = 1;
  src1.bits[0] = 0b00000000001100001010010010100110;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000001100001010010010100111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_11) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1;
  // src2 = 18768768;
  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000001000111100110001110000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000001000111100110001101111111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_12) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result = 0;
  int value_type_origin = 0;
  // src1 = 18446744073709551615.0;
  // src2 = 3556877454;
  src1.bits[0] = 0b11111111111111111111111111110110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000001001;
  src1.bits[3] = 0b00000000000000010000000000000000;
  src2.bits[0] = 0b11010100000000011010010010001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b10110111111011111001001001101010;
  origin.bits[1] = 0b11111111111111111111111111110111;
  origin.bits[2] = 0b00000000000000000000000000001001;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_13) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -54896651557845.352654545456455;
  // src2 = 21465;
  src1.bits[0] = 0b01110001100100011000110101000111;
  src1.bits[1] = 0b00001111010011100000001101011111;
  src1.bits[2] = 0b10110001011000010111001000100100;
  src1.bits[3] = 0b10000000000011110000000000000000;
  src2.bits[0] = 0b00000000000000000101001111011001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01111001010101000000110101000111;
  origin.bits[1] = 0b00111001001100010000001100100101;
  origin.bits[2] = 0b10110001011000010111001000100101;
  origin.bits[3] = 0b10000000000011110000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_14) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7961327845421.879754123131254;
  // src2 = 0;
  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_15) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_16) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_17) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_18) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7922816251427554395;
  // src2 = 65645646;
  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01011011000111100101100000001101;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_19) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2.7986531268974139743;
  // src2 = 9.979623121254565121244554;
  src1.bits[0] = 0b11111110100100001101100101011111;
  src1.bits[1] = 0b10000100011001000010000111101000;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;
  src2.bits[0] = 0b11010100101011100011110110001010;
  src2.bits[1] = 0b01110100000101000010011110100011;
  src2.bits[2] = 0b00000000000010000100000101000100;
  src2.bits[3] = 0b00000000000110000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00001110111111111010100000101010;
  origin.bits[1] = 0b00101001110101100000001000110100;
  origin.bits[2] = 0b00000000000001011111000010100001;
  origin.bits[3] = 0b10000000000110000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_20) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0.5456465465486476846545465485;
  // src2 = 0.68985125146545154;
  src1.bits[0] = 0b00001011000011110111000010001101;
  src1.bits[1] = 0b10010110101100000101100101010001;
  src1.bits[2] = 0b00010001101000010111101110000001;
  src1.bits[3] = 0b00000000000111000000000000000000;
  src2.bits[0] = 0b00010111001001010100110000000010;
  src2.bits[1] = 0b00000000111101010001010110011011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000100010000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01011010101111100101111101110011;
  origin.bits[1] = 0b00101101001111010011000001101000;
  origin.bits[2] = 0b00000100101010001101010101010111;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_21) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = -37986322154988653.784354545765;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b01001111101101000110000001100101;
  src2.bits[1] = 0b01000010001101101011011001100001;
  src2.bits[2] = 0b01111010101111011000110010011010;
  src2.bits[3] = 0b10000000000011000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01001111101101000110000001100101;
  origin.bits[1] = 0b01000010001101101011011001100001;
  origin.bits[2] = 0b01111010101111011000110010011010;
  origin.bits[3] = 0b00000000000011000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_22) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 79228162513351883030198514100;
  // src2 = -912454563345436235;
  src1.bits[0] = 0b10110110000111000111000110110100;
  src1.bits[1] = 0b11110011010101100100111101101000;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b01001001111000111000111001001011;
  src2.bits[1] = 0b00001100101010011011000010010111;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_23) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 79228162514264337593543950335;
  // src2 = 79228162514264337593543950335;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_24) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_25) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 1;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_26) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_27) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_sub_30) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 1;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_sub(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_div_1) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  // 30064771176
  // 3
  // 10021590392
  src1.bits[0] = 0b00000000000000000000000001101000;
  src1.bits[1] = 0b00000000000000000000000000000111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  origin.bits[0] = 0b01010101010101010101010101111000;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_2) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int a = 32768;
  int b = -2;
  int res_our_dec = 0;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  int res_origin = -16384;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  s21_from_decimal_to_int(result, &res_our_dec);
  ck_assert_uint_eq(res_our_dec, res_origin);
  ck_assert_uint_eq(check, check_origin);
}
END_TEST

START_TEST(s21_div_3) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int a = 32768;
  int b = 2;
  int res_our_dec = 0;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  int res_origin = 16384;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  s21_from_decimal_to_int(result, &res_our_dec);
  ck_assert_uint_eq(res_our_dec, res_origin);
  ck_assert_uint_eq(check, check_origin);
}
END_TEST

START_TEST(s21_div_4) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  // -30064771176
  // 2
  // 10021590392
  src1.bits[0] = 0b00000000000000000000000001101000;
  src1.bits[1] = 0b00000000000000000000000000000111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  origin.bits[0] = 0b10000000000000000000000000110100;
  origin.bits[1] = 0b00000000000000000000000000000011;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_5) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  // 0
  // 0.015
  // 0
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000001111;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000110000000000000000;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_6) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  // 3
  // 2
  // 1.5
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  origin.bits[0] = 0b00000000000000000000000000001111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000010000000000000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_7) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  s21_from_int_to_decimal(-101, &src1);
  s21_from_float_to_decimal(10.1, &src2);
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000001010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_8) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int check = s21_div(src1, src2, &result);
  int check_origin = 3;
  ck_assert_uint_eq(check, check_origin);
}
END_TEST

START_TEST(s21_div_9) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  // 3
  // 1
  // 3
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check, check_origin);
  ck_assert_uint_eq(result.bits[3], origin.bits[3]);
  ck_assert_uint_eq(result.bits[2], origin.bits[2]);
  ck_assert_uint_eq(result.bits[1], origin.bits[1]);
  ck_assert_uint_eq(result.bits[0], origin.bits[0]);
}
END_TEST

START_TEST(s21_div_10) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  float a = -115.2;
  float b = 0.0;
  s21_from_float_to_decimal(a, &src1);
  s21_from_float_to_decimal(b, &src2);
  int check = s21_div(src1, src2, &result);
  int check_origin = 3;
  ck_assert_uint_eq(check_origin, check);
  ck_assert_uint_eq(result.bits[3], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[0], 0);
}
END_TEST

START_TEST(s21_div_11) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  src1.bits[0] = 0x0006BFD0;
  src1.bits[1] = 0x00000000;
  src1.bits[2] = 0x00000000;
  src1.bits[3] = 0x00000000;

  src2.bits[0] = 0x00000028;
  src2.bits[1] = 0x00000000;
  src2.bits[2] = 0x00000000;
  src2.bits[3] = 0x00000000;

  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check_origin, check);
  ck_assert_uint_eq(result.bits[3], 0x00000000);
  ck_assert_uint_eq(result.bits[2], 0x00000000);
  ck_assert_uint_eq(result.bits[1], 0x00000000);
  ck_assert_uint_eq(result.bits[0], 0x00002B32);
}
END_TEST

START_TEST(s21_div_12) {
  s21_decimal src1, src2, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  src1.bits[0] = 0x0006BFD0;
  src1.bits[1] = 0x00000000;
  src1.bits[2] = 0x00000000;
  src1.bits[3] = 0x00000000;
  src2.bits[0] = 0x00000028;
  src2.bits[1] = 0x00000000;
  src2.bits[2] = 0x00000000;
  src2.bits[3] = 0x00000000;
  int check = s21_div(src1, src2, &result);
  int check_origin = 0;
  ck_assert_uint_eq(check_origin, check);
  ck_assert_uint_eq(result.bits[3], 0x00000000);
  ck_assert_uint_eq(result.bits[2], 0x00000000);
  ck_assert_uint_eq(result.bits[1], 0x00000000);
  ck_assert_uint_eq(result.bits[0], 0b00000000000000000010101100110010);
}
END_TEST

START_TEST(s21_div_14) {
  s21_decimal val1 = {{2, 0, 0, 0}, S21_NORMAL};
  s21_decimal val2 = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal res = {{0, 0, 0, 0}, S21_NORMAL};
  ck_assert_uint_eq(3, s21_div(val1, val2, &res));
}
END_TEST

START_TEST(s21_div_15) {
  s21_decimal value_1 = {{15, 0, 0, 0}, S21_NORMAL};
  s21_decimal value_2 = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal result = {{0, 0, 0, 0}, S21_NORMAL};
  s21_decimal check = {{0, 0, 0, 0}, S21_NORMAL};
  int return_value = s21_div(value_1, value_2, &result);
  ck_assert_uint_eq(s21_is_equal(result, check), 1);
  ck_assert_uint_eq(return_value, 3);
}
END_TEST

START_TEST(s21_mul_1) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 3;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_2) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 3;
  // src2 = 2;
  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_3) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 3;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_4) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_5) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 2;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_6) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 6521;
  // src2 = 74121;
  src1.bits[0] = 0b00000000000000000001100101111001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000010010000110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00011100110011110011101011000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_7) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 4;
  // src2 = 97623323;
  src1.bits[0] = 0b00000000000000000000000000000100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000101110100011001110100011011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00010111010001100111010001101100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_8) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 65658654;
  // src2 = 5;
  src1.bits[0] = 0b00000011111010011101111100011110;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000101;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00010011100100010101101110010110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_9) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -364748;
  // src2 = 1;
  src1.bits[0] = 0b00000000000001011001000011001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000001011001000011001100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_10) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 1;
  // src2 = 98745654321;
  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11111101101100110001110000110001;
  src2.bits[1] = 0b00000000000000000000000000010110;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111101101100110001110000110001;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_11) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -9878798789;
  // src2 = -3;
  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11100110011101111000010101001111;
  origin.bits[1] = 0b00000000000000000000000000000110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_12) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 9999999999999999999;
  // src2 = 1;
  src1.bits[0] = 0b10001001111001111111111111111111;
  src1.bits[1] = 0b10001010110001110010001100000100;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b10001001111001111111111111111111;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_13) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 18446744073709551615;
  // src2 = 1;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_14) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_15) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_16) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 0;
  // src2 = 0;
  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_17) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 79228162514264337593543950335;
  // src2 = -1;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_18) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 7922816251427554395;
  // src2 = 65645646;
  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b01011111001100010111011110111010;
  origin.bits[1] = 0b01000100111111001101101110110001;
  origin.bits[2] = 0b00000001101011100011011100011110;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_19) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = 665464545;
  // src2 = 8798232189789785;
  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b00010000010100101110011001011001;
  src2.bits[1] = 0b00000000000111110100000111110010;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11000100010110100111001000111001;
  origin.bits[1] = 0b01100100100011011110110011010011;
  origin.bits[2] = 0b00000000000001001101011111010011;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_20) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  // src1 = -79228162514264337593543950335;
  // src2 = 1;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_21) {
  s21_decimal src1, src2, result, origin;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 0;
  origin.bits[0] = 0b11111111111111111111111111111111;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b11111111111111111111111111111111;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_22) {
  s21_decimal src1, src2, origin, result;
  src1.state = S21_NORMAL;
  src2.state = S21_NORMAL;
  origin.state = S21_NORMAL;
  result.state = S21_NORMAL;
  int value_type_result, value_type_origin;
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b00000000000000000000000000000000;
  value_type_result = s21_mul(src1, src2, &result);
  value_type_origin = 1;
  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_uint_eq(origin.bits[3], result.bits[3]);
  ck_assert_uint_eq(origin.bits[2], result.bits[2]);
  ck_assert_uint_eq(origin.bits[1], result.bits[1]);
  ck_assert_uint_eq(origin.bits[0], result.bits[0]);
  ck_assert_uint_eq(value_type_result, value_type_origin);
}
END_TEST

START_TEST(s21_mul_23) {
  s21_decimal val1 = {{2, 0, 0, 0}, S21_NORMAL};
  s21_decimal val2 = {{2, 0, 0, 0}, S21_NORMAL};
  s21_decimal res = {{0, 0, 0, 0}, S21_NORMAL};
  ck_assert_uint_eq(0, s21_mul(val1, val2, &res));
}
END_TEST

START_TEST(s21_mul_24) {
  s21_decimal val1 = {{8, 0, 0, 0}, S21_NORMAL};
  s21_decimal val2 = {{2, 0, 0, 0}, S21_NORMAL};
  s21_decimal res = {{0, 0, 0, 0}, S21_NORMAL};
  ck_assert_uint_eq(0, s21_mul(val1, val2, &res));
}
END_TEST

START_TEST(s21_mul_25) {
  s21_decimal val1 = {{2, 0, 0, 0}, S21_NORMAL};
  s21_decimal val2 = {{8, 0, 0, 0}, S21_NORMAL};
  s21_decimal res = {{0, 0, 0, 0}, S21_NORMAL};
  ck_assert_uint_eq(0, s21_mul(val1, val2, &res));
}
END_TEST

Suite *test_arithmetic() {
  Suite *s = suite_create("s21_arithmetic");
  TCase *o = tcase_create("s21_arithmetic");
  suite_add_tcase(s, o);

  tcase_add_test(o, s21_add_1);
  tcase_add_test(o, s21_add_2);
  tcase_add_test(o, s21_add_3);
  tcase_add_test(o, s21_add_4);
  tcase_add_test(o, s21_add_5);
  tcase_add_test(o, s21_add_6);
  tcase_add_test(o, s21_add_7);
  tcase_add_test(o, s21_add_8);
  tcase_add_test(o, s21_add_9);
  tcase_add_test(o, s21_add_10);
  tcase_add_test(o, s21_add_11);
  tcase_add_test(o, s21_add_12);
  tcase_add_test(o, s21_add_13);
  tcase_add_test(o, s21_add_14);
  tcase_add_test(o, s21_add_15);
  tcase_add_test(o, s21_add_16);
  tcase_add_test(o, s21_add_17);
  tcase_add_test(o, s21_add_18);
  tcase_add_test(o, s21_add_19);
  tcase_add_test(o, s21_add_20);
  tcase_add_test(o, s21_add_21);
  tcase_add_test(o, s21_add_22);
  tcase_add_test(o, s21_add_23);
  tcase_add_test(o, s21_add_24);
  tcase_add_test(o, s21_add_25);
  tcase_add_test(o, s21_add_26);
  tcase_add_test(o, s21_add_27);
  tcase_add_test(o, s21_add_28);
  tcase_add_test(o, s21_add_29);
  tcase_add_test(o, s21_add_30);

  tcase_add_test(o, s21_sub_1);
  tcase_add_test(o, s21_sub_2);
  tcase_add_test(o, s21_sub_3);
  tcase_add_test(o, s21_sub_4);
  tcase_add_test(o, s21_sub_5);
  tcase_add_test(o, s21_sub_6);
  tcase_add_test(o, s21_sub_7);
  tcase_add_test(o, s21_sub_8);
  tcase_add_test(o, s21_sub_9);
  tcase_add_test(o, s21_sub_10);
  tcase_add_test(o, s21_sub_11);
  tcase_add_test(o, s21_sub_12);
  tcase_add_test(o, s21_sub_13);
  tcase_add_test(o, s21_sub_14);
  tcase_add_test(o, s21_sub_15);
  tcase_add_test(o, s21_sub_16);
  tcase_add_test(o, s21_sub_17);
  tcase_add_test(o, s21_sub_18);
  tcase_add_test(o, s21_sub_19);
  tcase_add_test(o, s21_sub_20);
  tcase_add_test(o, s21_sub_21);
  tcase_add_test(o, s21_sub_22);
  tcase_add_test(o, s21_sub_23);
  tcase_add_test(o, s21_sub_24);
  tcase_add_test(o, s21_sub_25);
  tcase_add_test(o, s21_sub_26);
  tcase_add_test(o, s21_sub_27);
  tcase_add_test(o, s21_sub_30);

  tcase_add_test(o, s21_div_1);
  tcase_add_test(o, s21_div_2);
  tcase_add_test(o, s21_div_3);
  tcase_add_test(o, s21_div_4);
  tcase_add_test(o, s21_div_5);
  tcase_add_test(o, s21_div_6);
  tcase_add_test(o, s21_div_7);
  tcase_add_test(o, s21_div_8);
  tcase_add_test(o, s21_div_9);
  tcase_add_test(o, s21_div_10);
  tcase_add_test(o, s21_div_11);
  tcase_add_test(o, s21_div_12);
  tcase_add_test(o, s21_div_14);
  tcase_add_test(o, s21_div_15);

  tcase_add_test(o, s21_mul_1);
  tcase_add_test(o, s21_mul_2);
  tcase_add_test(o, s21_mul_3);
  tcase_add_test(o, s21_mul_4);
  tcase_add_test(o, s21_mul_5);
  tcase_add_test(o, s21_mul_6);
  tcase_add_test(o, s21_mul_7);
  tcase_add_test(o, s21_mul_8);
  tcase_add_test(o, s21_mul_9);
  tcase_add_test(o, s21_mul_10);
  tcase_add_test(o, s21_mul_11);
  tcase_add_test(o, s21_mul_12);
  tcase_add_test(o, s21_mul_13);
  tcase_add_test(o, s21_mul_14);
  tcase_add_test(o, s21_mul_15);
  tcase_add_test(o, s21_mul_16);
  tcase_add_test(o, s21_mul_17);
  tcase_add_test(o, s21_mul_18);
  tcase_add_test(o, s21_mul_19);
  tcase_add_test(o, s21_mul_20);
  tcase_add_test(o, s21_mul_21);
  tcase_add_test(o, s21_mul_22);
  tcase_add_test(o, s21_mul_23);
  tcase_add_test(o, s21_mul_24);
  tcase_add_test(o, s21_mul_25);

  return s;
}
