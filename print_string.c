#include "main.h"

/**
 * print_string - Print a string.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		count += 6;
	}
	else
	{
		while (*str)
		{
			write(1, str, 1);
			str++;
			count++;
		}
	}

	return (count);
}
