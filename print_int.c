#include "main.h"

/**
 * print_int - Print an integer.
 * @args: The va_list of arguments containing the integer.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int count = 1;
	char c;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		write(1, "-", 1);
		num = -num;
		n = -n;
		last = -last;
		count++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			c = digit + '0';
			write(1, &c, 1);
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}

	c = last + '0';
	write(1, &c, 1);
	return (count);
}

/**
 * print_dec - Print a decimal.
 * @args: The va_list of arguments containing the decimal.
 *
 * Return: The number of characters printed.
 */
int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int count = 1;
	char c;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		write(1, "-", 1);
		num = -num;
		n = -n;
		last = -last;
		count++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			c = digit + '0';
			write(1, &c, 1);
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}

	c = last + '0';
	write(1, &c, 1);
	return (count);
}
