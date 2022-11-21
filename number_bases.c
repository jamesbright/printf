#include "main.h"

/**
 * printf_binary - converts and prints a number from base 10 to binary
 * @list: argument list
 * Return: length of number printed
 */

int printf_binary(va_list list)
{
unsigned int num;
int i, len;
char *str;
char *str_rev;

num = check_sign(list);
if (num >= 1)
{
len = _baselen(num, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);
for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
str[i] = '0';
else
str[i] = '1';
num = num / 2;
}
str[i] = '\0';
str_rev = strev(str);
if (str_rev == NULL)
return (-1);
write_buffer(str_rev);
free(str);
free(str_rev);
}
return (len);
}
