#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int len;

	len = _printf("Let's try to _printf a simple sentence.\n");
	_printf("Length:[%d]\n", len);
	_printf("Negative:[%d]\n", -762534);
	_printf("String:[%s]\n", "Hello, World!");
	_printf("Character:[%c]\n", 'A');
	_printf("Integer:[%i]\n", 12345);
	_printf("Decimal:[%d]\n", 54321);

	return (0);
}
