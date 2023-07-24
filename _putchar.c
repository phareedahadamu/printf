#include "main.h"

/**
 * _putchar - A function that prints a character to stdout
 * @c: The character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
