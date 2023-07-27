#include "main.h"

/**
 * get_func - A function pointer that receives the format specifier
 *           as argument and points to the appropiate function
 *           for printing it.
 * @s: The string which contains the format specifier
 * Return: A pointer to the appropriate function or NULL
 */

int (*get_func(const char s))(va_list arg)
{
	sp_f spf[] = {
	{'c', print_char},
	{'s', print_str},
	{'d', print_int},
	{'i', print_int},
	{'b', print_bin},
	{'u', print_uint},
	{'o', print_oct},
	{'\0', NULL}
	};

	int i = 0;

	while (spf[i].spec != '\0')
	{
		if (s != spf[i].spec)
			i++;
		else
			return (spf[i].f);
	}
	return (NULL);
}
