#include "main.h"
#include <stdio.h>
int main(void)
{
	int c = 0;
	int p = 0;

	c = _printf("My grade: %d\n", 1838992830);
	p = printf("My grade: %d\n", 1838992830);

	printf("_printf = %d\nprintf = %d\n", c, p);
	return (0);
}
