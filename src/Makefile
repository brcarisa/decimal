CC = gcc -Wall -Werror -Wextra
CFLAGS = -g -std=c11
OBJ = s21_arithmetic.c s21_comparison.c s21_converters.c s21_another_func.c s21_help_func.c
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
  	OPEN_CMD = xdg-open
	ADD_LIB = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif

ifeq ($(UNAME_S),Darwin)
	OPEN_CMD = open
	ADD_LIB = -lcheck
endif

all: s21_decimal.a test clean

s21_decimal.a:
	@$(CC) $(CFLAGS) *.c -c
	@ar rc s21_decimal.a *.o
	@ranlib s21_decimal.a

test:
	@$(CC) $(CFLAGS) --coverage *.c TESTS/*.c -o  s21_test $(ADD_LIB)
	@./s21_test

gcov_report: test
	@lcov -t "s21_decimal_test" -o otchet.info -c -d .
	@genhtml -o report otchet.info
	@open ./report/src/index.html

clang_format:
	@cp ../materials/linters/.clang-format ./.clang-format
	clang-format -n *.c *.h
	clang-format -n TESTS/*.c TESTS/*.h
	@rm .clang-format

cppcheck:
	-find . -type f -name "*.c" | xargs cppcheck -q --enable=all --inconclusive --platform=unix64 --std=c11

valgrind:
	valgrind ./tests --leak-check=full

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.info
	rm -rf *.gcov 
	rm -rf *.dSYM
	rm -rf ./report

.PHONY: all open clang_format cppcheck clean force_clean re
