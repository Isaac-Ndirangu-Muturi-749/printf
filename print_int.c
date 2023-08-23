#include "main.h"

/**
 * print_int - Print an integer.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
		write(1, "-", 1);
		count++;
	}

	if (n == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else
	{
		int reversed = 0;
		int num_digits = 0;

		while (n > 0)
		{
			reversed = reversed * 10 + (n % 10);
			n /= 10;
			num_digits++;
		}

		while (reversed > 0)
		{
			char digit = '0' + (reversed % 10);

			write(1, &digit, 1);
			reversed /= 10;
			count++;
		}
	}

	return (count + is_negative);
}
