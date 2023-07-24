#include "main.h"

/**
 * _printf - A variadic function that prints to stdout.
 *           It handles a list of format specifiers
 * @format: The things to be printed
 * Return: THe length of printed characters
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, r_val = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			r_val++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				r_val++;
			}
			else
			{
				if (get_func(format[i]) == NULL)
					r_val += _putchar(format[i]);
				else
					r_val += get_func(format[i])(arg);
			}
		}
		i++;
	}
	va_end(arg);
	return (r_val);
}
