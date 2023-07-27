#include "main.h"

int print_s(va_list arg)
{
	int i, count = 0, rem, hex, ascii;
        char *str;

        str = va_arg(arg, char *);

        if (str == NULL)
                str = "(null)";
        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] >= 32 && str[i] < 127)
			count += _putchar(str[i]);
		else
		{
			count += _putchar('\\');
			count += _putchar('x');
			ascii = str[i];
			hex = (ascii / 16);
			if (hex < 10)
				count += _putchar(hex + '0');
			else
				count += _putchar(hex + 55);
			rem = (ascii % 16);
			if (rem < 10)
				count += _putchar(rem + '0');
			else
				count += _putchar(rem + 55);
		}
	}
        return (count);
}
