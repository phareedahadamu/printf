#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, r_val = 0;

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
				r_val += get_func(format[i])(arg);
		}
		i++;
	}
	va_end(arg);
	return (r_val);
}
