#include "main.h"

/**
 * printf_addressp - Prints a pointer in hex format
 * @list: argumrnt list
 *
 * Return: print count
 **/
int printf_addressp(va_list list)
{
char *str;
int print_count;

str = to_ascii(va_arg(list, unsigned long int), 16);

if (!_strcmp(str, "0"))
return (write_buffer("(nil)"));

print_count = write_buffer("0x");

if (!_strcmp(str, "-1"))
print_count += write_buffer("ffffffffffffffff");
else
print_count += write_buffer(str);

return (print_count);
}

