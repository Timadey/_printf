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
char *num_to_str(int);
int pr_dec(va_list);
#endif
