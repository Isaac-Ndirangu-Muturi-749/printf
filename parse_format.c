#include "main.h"

/**
 * parse_format - Parse and print the formatted string.
 * @format: The format string containing the conversion specifiers.
 * @args: The va_list of arguments.
 * @m: The array of conversion specifiers and their corresponding functions.
 *
 * Return: The number of characters printed.
 */
int parse_format(const char *format, va_list args, struct convert_match *m)
{
	int count = 0;
	int i = 0;
	int specifier_found;
	int j;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			specifier_found = 0;

			/* Find specifier match*/
			for (j = 0; m[j].specifier; j++)
			{
				if (format[i] == *(m[j].specifier))
				{
					count += m[j].conversion_function(args);
					specifier_found = 1;
					break;
				}
			}

			if (!specifier_found)
			{
				write(1, &format[i - 1], 2);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	return (count);
}
