# _printf
Project done during Software Engineering program @holbertonSchool

# SYPNOSIS
`#include "main.h"`

`int _printf(const char *format, ...);`

`#include <stdarg.h>`


`int pr_char(va_list);` <br>
`int pr_string(va_list);` <br>
`int pr_int(va_list);` <br>
`int pr_unsigned_int(va_list);` <br>
`int pr_octal(va_list);` <br>
`int pr_binary(va_list);` <br>
`int pr_hex(va_list);` <br>
`int pr_hex_adv(va_list);` <br>
`int pr_address(va_list);`

# DESCRIPTION
The _printf function, with the help of other functions, produces output according to a format. This function writes to the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of `stdarg(3)`) are converted for output.

# CONVERSION SPECIFIER
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

- d, i <br>
The int argument is converted to signed decimal notation.
 The precision, if any, gives the minimum number of digits
 that must appear; if the converted value requires fewer
 digits, it is padded on the left with zeros.  The default
 precision is 1.  When 0 is printed with an explicit
 precision 0, the output is empty.
***
- o, u, x, X <br>
The unsigned int argument is converted to unsigned octal
 (o), unsigned decimal (u), or unsigned hexadecimal (x and
 X) notation.  The letters abcdef are used for x
 conversions; the letters ABCDEF are used for X
 conversions.  The precision, if any, gives the minimum
 number of digits that must appear; if the converted value
 requires fewer digits, it is padded on the left with
 zeros.  The default precision is 1.  When 0 is printed
 with an explicit precision 0, the output is empty.
***
- c <br>
If no l modifier is present, the int argument is converted
 to an unsigned char, and the resulting character is
 written.
***
- s <br>
If no l modifier is present: the const char * argument is
 expected to be a pointer to an array of character type
 (pointer to a string).  Characters from the array are
 written up to (but not including) a terminating null byte
 ('\0');
***
- p <br>
The void * pointer argument is printed in hexadecimal
***
- % <br>
A '%' is written.  No argument is converted.  The complete
 conversion specification is '%%'.
**
# RETURN VALUE
Upon successful return, these functions return the number of
 characters printed (excluding the null byte used to end output to
 strings).

# EXAMPLES
To print a simple sentence
`_printf("Let's try to printf a simple sentence.\n");`

Print an address
`int i;`
`int *p = &i;`
`_printf("i address: %p", p);`

# AUTHOR
Timothy Adeleke
