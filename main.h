#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * sypnosis functions
 */
int _putchar(char c);
int _printf(const char *format, ...);
int (*g_print(char))(va_list);
/**
 * functions that handles printing for a specifier
 */
int pr_char(va_list);
int pr_string(va_list);
int pr_int(va_list);
int pr_unsigned_int(va_list);
int pr_octal(va_list);
int pr_binary(va_list);
int pr_hex(va_list);
/**
 * custom functions
 */
int pr_in_base(unsigned int, unsigned int);
char *num_to_str(unsigned int, unsigned int);
int pr_str(char *);
/**
 * struct print - array of prints functions
 * and their corresponding character
 * @c: the conversion specifier
 * @f: the print function
 */
typedef struct print
{
	char c;
	int (*func)(va_list);
}print;
#endif
