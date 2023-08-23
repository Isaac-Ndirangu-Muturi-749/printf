#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/* Define the struct to match conversion specifiers with functions */
/**
 * struct convert_match - match conversion specifiers with functions.
 * @specifier: The conversion specifier.
 * @conversion_function: The function to handle the conversion.
 */
struct convert_match
{
	const char *specifier;
	int (*conversion_function)(va_list args);
};

/*Define a typedef for the struct*/
typedef struct convert_match convert_match;

/*Forward declaration of struct convert_match*/
struct convert_match;

/* Custom printf implementation */
int _printf(const char *format, ...);

/* Conversion functions */
int parse_format(const char *format, va_list args, struct convert_match *m);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */
