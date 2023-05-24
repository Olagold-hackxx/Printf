#include "main.h"
/**
* c_char_cnvrt - copy char to string
* @args: ASCII value to be converted
*
* Return: Converted string
*/
char *c_char_cnvrt(va_list args)
{
	char *print_char, temp;

	print_char = malloc(sizeof(char) + 1);
	if (print_char == NULL)
		return (NULL);
	temp = va_arg(args, int);
	if (temp != '\0')
		print_char[0] = temp;
	else
	{
		free(print_char);
		return (NULL);
	}
	return (print_char);
}
