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
	unsigned int digits = 0, count = 0, pow, i;

	int temp, n = va_arg(arg, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	temp = n;

	do {
		digits++;
		count++;
		temp = temp / 10;
	} while (temp != 0);

	while (digits > 0)
	{
		pow = 1;

		for (i = 1; i < digits; i++)
			pow *= 10;
		_putchar((n / pow) + '0');
		n -= (n / pow) * pow;
		digits--;
	}
	return (count);
}

/**
 * print_bin - A function that prints an int in binary
 * @arg: The argument to be printed
 * Return: The length of digits printed
 */
int print_bin(va_list arg)
{
	unsigned int n, i, count = 0;

	n = va_arg(arg, unsigned int);
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		count++;
		(n & i) ? printf("1") : printf("0");
	}
	return (count);
}
