#include <stdarg.h>
#include "main.h"
/**
 * pr_string - handles string printing for printf
 * @arg: the string to print
 * Return: number of charcter printed
 */
int pr_string(va_list arg)
{
	int count = 0;
	char *str = va_arg(arg, char *);

	if(str)
	{
		while(str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
	};
	return (count);
}
