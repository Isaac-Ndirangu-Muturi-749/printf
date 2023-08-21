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

	va_start(args, format);
	count = parse_format(format, args);
	va_end(args);

	return (count);
}
