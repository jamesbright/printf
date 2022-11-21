#include "main.h"

/**
 * printf_binary - converts and prints a number from base 10 to binary
 * @list: argument list
 * Return: length of number printed
 */

int printf_binary(va_list list)
{
int len;
char *str;

str = to_ascii(va_arg(list, unsigned int), 2);

len = write_buffer(str);

return (len);
}
