#include "main.h"
#include <stdio.h>
int main(void)
{
	int c = 0;
	int p = 0;

	c = _printf("My grade: %i\n", -98);
	p = printf("My grade: %i\n", 0xf5);

	printf("_printf = %d\nprintf = %d\n", c, p);
	return (0);
}
