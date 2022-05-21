#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * pr_hex - prints number in hexadecimal
 * @arg: argument to print
 * Return: no of character printed
 */
int pr_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return(pr_in_base(num, 16));
}
/**
 * pr_hex_adv - prints number in hexadecimal but in uppercase letters
 * @arg: argument to print
 * Return: no of character printed
 */
int pr_hex_adv(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return(pr_in_base_adv(num, 16, 55));
}

/**
 * pr_unsigned_int - handles printing for unsigned int
 * @arg: the argument to print
 * Return: no of character printed
 */
int pr_unsigned_int(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return(pr_in_base(num, 10));
}

/**
 * pr_octal - prints number in octal form
 * @arg: argument to print
 * Return: num of character printed
 */
int pr_octal(va_list arg)
{
	int num = va_arg(arg, int);

	return(pr_in_base(num, 8));
}

/**
 * pr_binary - prints number in binary
 * @arg: the argument
 * Return: num of character printed
 */
int pr_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return(pr_in_base(num, 2));
}

/**
 * pr_int - handles integer printing for printf
 * @arg; argument to print
 * Return: num of character printed
 */
int pr_int(va_list arg)
{
	int count = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	};
	return(pr_in_base(num, 10));
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
