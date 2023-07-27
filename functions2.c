#include "main.h"

/**
 * print_uint - A function that prints an unsigned integer
 * @arg: The variadic argument to be printed
 * Return: The number of digits printed
 */

int print_uint(va_list arg)
{
	unsigned int digits = 0, count = 0, pow, i;
	long int temp, n = va_arg(arg, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
		n = UINT_MAX + (n) + 1;
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
 * print_oct - A function that converts a decimal number to octal
 * @arg: The argument to be converted
 * Return: The number of digits printed
 */
int print_oct(va_list arg)
{
	unsigned int n = va_arg(arg, int);
	int rem, temp[100], count = 0, i, j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n != 0; i++)
	{
		rem = n % 8;
		temp[i] = rem;
		n = n / 8;
	}
	for(j = (i - 1); j >= 0; j--)
	{
		count += _putchar(temp[j] + '0');
	}
	return (count);
}

/**
 * print_hex - A function that converts a number from decimal to hex (lower case)
 * @arg: The argument to be converted
 * Return: The number of digits / characters printed
 */

int print_hex(va_list arg)
{
	unsigned int n = va_arg(arg, int);
	int rem, count = 0, i, j;
	char temp[100];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n != 0; i++)
	{
		rem = n % 16;
		if (rem < 10)
			temp[i] = rem + 48;
		else
			temp[i] = rem + 87;
		n = n / 16;
	}
	for(j = (i - 1); j >= 0; j--)
	{
		count += _putchar(temp[j]);
        }
        return (count);
}
