#include "main.h"

/**
 * printf_binary - converts and prints a number from base 10 to binary
 * @list: argument list
 * Return: length of number printed
 */

int printf_binary(va_list list)
{
int print_count;
char *str;

str = to_ascii(va_arg(list, unsigned int), 2);

print_count = write_buffer(str);

return (print_count);
}

/**
 * printf_unsigned - prints an unsigned int
 * @list: argument list
 * Return: length of number printed
 */

int printf_unsigned(va_list list)
{
char *str;
int print_count;

str = to_ascii(va_arg(list, unsigned int), 10);

print_count = write_buffer((str != NULL) ? str : "NULL");

return (print_count);
}


/**
 * printf_octal - Print an octal number
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int printf_octal(va_list list)
{
char *str;
int print_count;

str = to_ascii(va_arg(list, unsigned int), 8);

print_count = write_buffer((str != NULL) ? str : "NULL");

return (print_count);
}

/**
 * printf_hex_lower - Print a lower hexadecimal number
 * @list: argument list
 *
 * Return: Length of the number
 **/
int printf_hex_lower(va_list list)
{
char *str;
int print_count;

str = to_ascii(va_arg(list, unsigned int), 16);

print_count = write_buffer((str != NULL) ? str : "NULL");

return (print_count);
}



/**
 * printf_hex_upper - Print an upper case hexadecimal number
 * @list: argument list
 *
 * Return: Length of the number
 **/
int printf_hex_upper(va_list list)
{
char *str;
int print_count, i;

str = to_ascii(va_arg(list, unsigned int), 16);

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}

print_count = write_buffer((str != NULL) ? str : "NULL");

return (print_count);
}


