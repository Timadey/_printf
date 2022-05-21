#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
 * g_print - get the print function for a format
 * @c: the character representing the format
 * Return: the pointer to that function
 */
int (*g_print(char c))(va_list arg)
{
	print specifier[] = {
		{'c', pr_char},
		{'s', pr_string},
		{'d', pr_int},
		{'i', pr_int},
		{'b', pr_binary},
		{'u', pr_unsigned_int},
		{'o', pr_octal},
		{'x', pr_hex}
	};
	int i = 0;

	for(i = 0; i < 8; i++)
	{
		if(specifier[i].c == c)
		{
			return(specifier[i].func);
		}
	};
	return(NULL);
}
