#include "main.h"

/**
 * _printf - prints characters to the output screen according to the format
 * specifier
 * @format: an argument of all the desired characters
 * Return: a total count of characters printed
 */

int _printf(const char *format, ...)
{
int print_count;
conv_f func[] = {
{"c", printf_char},
{"s", printf_string},
{"%", printf_percent},
{"i", printf_integer},
{"d", printf_decimal},
<<<<<<< HEAD
{"p", printf_addressp},
=======
{"b", printf_binary},
>>>>>>> 15eba78ccf20e159487183661396f8459500d696
};

va_list list;

if (format == NULL)
return (-1);

va_start(list, format);

print_count = selector(format, func, list);
va_end(list);
return (print_count);
}

