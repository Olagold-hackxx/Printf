#include "main.h"
#include <stdio.h>

/**
 * printchar - print chars
 * @list: list of args
 * Return: 1
 */
int print_char(va_list list)
{
	char printchar = va_arg(list, int);

	putchar(printchar);
	return (1);
}
