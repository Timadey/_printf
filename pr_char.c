#include <stdarg.h>
#include "main.h"
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
