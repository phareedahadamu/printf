#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct spec_func - A structure that pairs the format specifier
 *            to the function that prints it
 * @spec: The specifier
 * @f: Function pointer
 */

typedef struct spec_func
{
	char spec;
	int (*f)(va_list arg);
} sp_f;

int _printf(const char *format, ...);
int (*get_func(const char s))(va_list arg);
int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_bin(va_list arg);
int print_uint(va_list arg);

#endif
