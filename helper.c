#include "main.h"

/**
 * to_ascii - converts integer to ascii
 * @num: number to convert
 * @base base to use for conversion
 * Return: char
 */

char *to_ascii(long int num, int base)
{
static char *array = "0123456789abcdef";
static char buffer[50];
char sign = 0;
char *ptr;
unsigned long n = num;

if (num < 0)
{
n = -num;
sign = '-';
}
ptr = &buffer[49];
*ptr = '\0';

do      {
*--ptr = array[n % base];
n /= base;
} while (n != 0);

if (sign)
*--ptr = sign;
return (ptr);
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
int len, i, j;
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

for (j = 0; j < len / 2; j++, len--)
{
temp = dest[len -  1];
str[len - 1] = dest[j];
str[j] = temp;
}
return (dest);
}

