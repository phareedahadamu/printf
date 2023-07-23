#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/** Structure that pairs the format specifier 
 * to the function that prints it
 */

typedef struct spec_func
{
        char spec;
        int (*f)(va_list arg);
} sp_f;

int _printf(const char *format, ...);
int (*get_func(const char s))(va_list arg);

/**
 * functions for printing
 */
int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);

#endif
