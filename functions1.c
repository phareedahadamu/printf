#include "main.h"

/**
 * print_char - A function that prints a character
 * @arg: The variadic argument
 * Return: 1 on success
 */
int print_char(va_list arg)
{
	int count;

	count = _putchar(va_arg(arg, int));

	return (count);
}

/**
 * print_str - A function that prints a string
 * @arg: The variadic argument
 * Return: The length of the string
 */
int print_str(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_int - A function that prints an integer
 * @arg: The variadic argument
 * Return: The length of the integer
 */
int print_int(va_list arg)
{
	int temp, digits = 0, n, count = 0, pow, i;

	n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	temp = n;

	do {
		digits++;
		temp = temp / 10;
	} while (temp != 0);

	while (digits > 0)
	{
		pow = 1;

		for (i = 1; i < digits; i++)
			pow *= 10;
		count += _putchar((n / pow) + '0');
		n -= (n / pow) * pow;
		digits--;
	}
	return (count);
}
