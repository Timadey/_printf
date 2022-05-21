#include "main.h"
#include <stdlib.h>

/**
 * pr_in_base - prints an integer in a particular base
 * @num: number to print
 * @base: base to print it
 * Return: number of character printed
 *
int pr_in_base(unsigned int num, unsigned int base)
{
	int count = 0;
	char *num_str;

	num_str = num_to_str(num, base);
	count += pr_str(num_str);
	free(num_str);
	return(count);
}
*/

/**
 * pr_in_base - a function that calls pr_in_base_adv with default value
 * @num: the number
 * @base: base to convert string to
 * Return: a pointer to pr_in_base
 */
int pr_in_base(unsigned int num, unsigned int base)
{
	return (pr_in_base_adv(num, base, 87));
}

/**
 * pr_in_base_adv - advanced print in base
 * Provides the starting alphabet of hexadecimal format
 * @num: the number
 * @base: the base
 * @hex: the starting point to add hexadecimal ascii code
 * Return: count of character printed to stdout
 */
int pr_in_base_adv(unsigned int num, unsigned int base, char hex)
{
	char *str;
	unsigned int n = num;
	unsigned int rem = 0;
	int count = 0;
	int len = 1;

	while (n > (base - 1))
	{
		n /= base;
		len++;
	};
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		free(str);
		exit(99);
	}
	else
	{
		str[len] = '\0';
		len--;
		while (len > -1)
		{
			rem = num % base;
			str[len] = (rem < 10 ? '0' : hex) + rem;
			num /= base;
			len--;
		};
	};
	count += pr_str(str);
	free(str);
	return(count);
}

/**
 * pr_str - prints a string
 * @str: pointer to the string
 * Return: count of character printed
 */
int pr_str(char *str)
{
	int count = 0;

	if(!str)
		str = "(null)";
	while(str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	};
	return(count);
}
