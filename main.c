#include "main.h"
#include <stdio.h>
int main(void)
{
	int count = 0;
	count = _printf("I am a %% boy, %c\nMy name is %s\n", 'M', "Timothy");
	printf("%d\n", count);
	return (0);
}
