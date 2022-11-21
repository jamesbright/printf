#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct conv - a structure for symbols and functions
 * @sym: a symbol
 * @func: function associated with the symbol
 */

typedef struct conv
{
char *sym;
int (*func)(va_list);
} conv_f;

int _putchar(char c);
int selector(const char *format, conv_f func[], va_list list);
int _printf(const char *format, ...);
int printf_char(va_list);
int printf_string(va_list);
int printf_percent(va_list);
int printf_integer(va_list i);
int printf_decimal(va_list dec);
unsigned int _baselen(unsigned int num, int base);
void write_buffer(char *str);
char *strev(char *str);
char *to_ascii(long int num, int base);
int printf_binary(va_list list);

#endif /* _MAIN_H */

