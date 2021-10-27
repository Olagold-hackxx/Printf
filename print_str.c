#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_string - prints string in va_list
 * @list: lists of args
 * Return: number of char or 1 when NULL
 */
int print_string(va_list list)
{
	char *Printstring;

	Printstring = va_arg(list, char *);
	if (Printstring == NULL)
		return (1);
	fputs(Printstring, stdout);

	return(strlen(Printstring));
}
