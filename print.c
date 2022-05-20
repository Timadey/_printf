#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * pr_dec - handle decimal printing
 * @arg: argument top print
 * Return: number of character printed
 */
int pr_dec(va_list arg)
{
	int count = 0;
	int num = va_arg(arg, int);
	unsigned int n = 0;
	char *num_str;

	if (num < 0)
	{
		count += _putchar('-');
		n = num * -1;
	};
	num_str = num_to_str(n);
	count += pr_str(num_str);
	free(num_str);
	return(count);
}

/**
 * pr_char - function that handles character printing for _printf
 * @arg: the character to print
 * Return: count of character printed
 */
int pr_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * pr_string - handles string printing for printf
 * @arg: the string to print
 * Return: number of charcter printed
 */
int pr_string(va_list arg)
{
	int count = 0;
	char *str = va_arg(arg, char *);

	count = pr_str(str);
	return (count);
}
