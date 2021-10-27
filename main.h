#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);

/**
 * Struct format - struct to hold format and ptr to format
 * @format_specifier: data format
 * @func_format: points to func to print called format
 */
typedef struct format_spec
{
	char *format;
	int (*func_ptr)(va_list);
} all_data;
#endif /* HOLBERTON_H */
