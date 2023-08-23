#include "main.h"

/**
 * print_percent - Print a literal '%' character.
 * @args: The va_list of arguments (not used in this function).
 *
 * Return: Always returns 1 (the number of characters printed).
 */
int print_percent(va_list args)
{
	(void)args; /*Unused parameter*/

	write(1, "%", 1);
	return (1);
}
