#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints formatted strinngs to the standard output
 * @format: format of the string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count;
	int (*print)(va_list);
	va_list(arg);

	va_start(arg, format);

	while(format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			/**
			 * handle percentage
			 */
			i++;
			if (format[i] == '%')
				_putchar(format[i]);
			print = get_print(format[i]);
			if(print)
				count = print(arg);
		};
		i++;
	};
	va_end(arg);
	return (count);
}
