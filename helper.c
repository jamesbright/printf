#include "main.h"


/**
 * check_sign - checks the sign of number
 * @list: argument list containing number
 * Return: number if positive
 */

int check_sign(va_list list)
{
unsigned int num;
num = va_arg(list, unsigned int);
if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
return (num);
}

/**
 * _baselen - get the lenth of number base
 * @num: a number
 * @base: the base of number
 * Return: integer representing the length of num
 */

unsigned int _baselen(unsigned int num, int base)
{
unsigned int i;

for (i = 0; num > 0; i++)
{
num = num / base;
}
return (i);
}


/**
 * write_buffer  - writes characters to std
 * @str: string to iterate through
 */

void write_buffer(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
}

/**
 * strev - reverses a string
 * @str: string to be reversed
 */

char *strev(char *str)
{
int len, i;
char temp;
char *dest;
for (len = 0; str[len] != '\0'; len++)
{}

dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);

for (i = 0; i < len; i++)
dest[i] = str[i];
dest[i] = '\0';

for (i = 0; i< len / 2; i++, len--)
{
temp = dest[len -  1];
str[len - 1] = dest[i];
str[i] = temp;
}
return (dest);
}

