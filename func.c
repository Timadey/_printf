#include "main.h"
#include <stdlib.h>
/**
 * num_to_str - converts an unsigned int to string
 * @num: the number
 * Return: a pointer to the converted string
 */
char *num_to_str(int num)
{
	char *str;
	int n = num;
	int len = 1;

	while (n > 9)
	{
		n /= 10;
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
			str[len] = '0'+ (num % 10);
			num /= 10;
			len--;
		};
	};
	return(str);
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
		str = "(nil)";
	while(str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	};
	return(count);
}
