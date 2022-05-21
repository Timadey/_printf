#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * driving functions
 */
int _putchar(char c);
int _printf(const char *format, ...);
int (*g_print(char))(va_list);
/**
 * functions that handles printing for a specifier
 * defined in 'print.c'
 */
int pr_char(va_list);
int pr_string(va_list);
int pr_int(va_list);
int pr_unsigned_int(va_list);
int pr_octal(va_list);
int pr_binary(va_list);
int pr_hex(va_list);
int pr_hex_adv(va_list);
/**
 * core functions
 * defined in 'func.c'
 */
int pr_in_base(unsigned int, unsigned int);
int pr_in_base_adv(unsigned int, unsigned int, char);
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
