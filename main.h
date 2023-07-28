#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct format - format of struct
 * @ch: char representing the data type
 * @f: func ptr that prints according to symbol
*/
typedef struct format
{
	char *ch;

	int (*f)(va_list);
} format_t;

/** main functions */
int _printf(const char *format, ...);
int parser(const char *format, format_t func_list[], va_list);
int print_char(va_list);
int print_str(va_list);
int print_Str(va_list);
int print_mod(va_list);
int print_int(va_list);
int print_unsigned_int(va_list);
int print_addr(va_list);
int print_rot13(va_list);

/** base converter */
int print_bin(va_list);
int print_oct(va_list);
int print_oct(va_list);
void print_oct_help(unsigned int num, int *ptr);
int print_he_x(va_list);
int print_he_X(va_list list);

/** helper func */
char *rev_str(char *);
int base_len(unsigned int, int);
void print_base(char *str);

int _putchar(char c);

#endif
