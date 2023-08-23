#include "main.h"

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string containing conversion specifiers.
 * @...: The variable arguments to be formatted and printed.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	/* Conversion specifier-function pairs */
	convert_match m[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int},
		/* ... other specifier-function pairs ...*/
		{NULL, NULL} /* End of the array */
	};

	va_start(args, format);
	count = parse_format(format, args, m);
	va_end(args);

	return (count);
}
