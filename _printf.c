#include "main.h"
#include <stdio.h>

/**
 * _printf - a printf function
 * @format: specifies data type
 * Return: no of characters
 */

int _printf(const char *format, ...)
{
	int j, i, Unknown_format, Charlength = 0;
	va_list list;
	all_data type[] = {
		{"c", print_char},
		{"s", print_string},
	};

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			Unknown_format = Charlength;
			for (j = 0; j < 2; j++)
			{
				if (*(type[j].format) == format[i])
				{
					(type[j]).func_ptr(list);
					Charlength += (type[j]).func_ptr(list);
				}
				if (format[i] == '%')
				{
					i++;
				}
			}
			if (Charlength == Unknown_format)
			{
				putchar('%');
				putchar(format[i]);
				Charlength += 2;
			}
		}
		else
		{
			putchar(format[i]);
			Charlength++;
		}
	}
	va_end(list);
	return (Charlength);
}
