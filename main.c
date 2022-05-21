#include "main.h"
#include <stdio.h>
int main(void)
{
	int c = 0;
	int p = 0;

	c = _printf("My grade: %x\n", 192830);
	p = printf("My grade: %x\n", 192830);

	printf("_printf = %d\nprintf = %d\n", c, p);
	return (0);
}
