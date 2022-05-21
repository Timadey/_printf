#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print(char))(va_list);
int pr_char(va_list);
int pr_string(va_list);
int pr_int(va_list);
int pr_str(char *);
char *num_to_str(unsigned int, unsigned int);
/**
 * struct print - array of prints functions
 * and their corresponding character
 * @c: the conversion specifier
 * @f: the print function
 */
typedef struct print
{
	char c;
}print;
int pr_in_base(int, unsigned int);
int pr_binary(va_list);
#endif
