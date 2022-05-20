#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
 * get_print - get the print function for a format
 * @c: the character representing the format
 * Return: the pointer to that function
 */
int (*get_print(char c))(va_list arg)
{
	if (c == 'c')
		return(pr_char);
	if (c == 's')
		return(pr_string);
	if (c == 'd')
		return(pr_dec);
	return (NULL);
}
