#include "main.h"

/**
 * print_percent - Print a percent character.
 * @args: The va_list of arguments.
 *
 * Return: Always return 1 (number of characters printed).
 */
int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}
