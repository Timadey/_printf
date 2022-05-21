#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * pr_binary - prints number in binary
 * @arg: the argument
 * Return: num of character printed
 */
int pr_binary(va_list arg)
{
	unsigned int num = va_arg(arg, int);
	return(pr_in_base(num, 2));
}
/**
 * pr_int - handles integer printing for printf
 * @arg; argument to print
 * Return: num of character printed
 */
int pr_int(va_list arg)
{
	int num = va_arg(arg, int);
	return(pr_in_base(num, 10));
}

/**
 * pr_in_base - prints an integer in a particular base
 * @num: number to print
 * @base: base to print it
 * Return: number of character printed
 */
int pr_in_base(int num, unsigned int base)
{
	int count = 0;
	char *num_str;

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	};
	num_str = num_to_str(num, base);
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
