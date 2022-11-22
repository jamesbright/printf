#include "main.h"

/**
 * printf_char - Prints a character
 * @list: arguments list
 * Return: number of characters printed
 */

int printf_char(va_list list)
{
_putchar(va_arg(list, int));
return (1);
}

/**
 * printf_string - prints a string
 * @list: argument list
 * Return: number of characters printed
 */

int printf_string(va_list list)
{
int i;
char *str;

str = va_arg(list, char *);
if (str == NULL)
str = "(null)";

i = 0;
while (*str != '\0')
{
_putchar(*str);
str++;
i++;
}
return (i);
}

/**
 * printf_revstring - prints a string
 * @list: argument list
 * Return: number of characters printed
 */

int printf_revstring(va_list list)
{
int i, len;
char *str;
str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (len = 0; str[len] != '\0'; len++)
{}

for (i = len - 1; i >= 0; i--)
_putchar(str[i]);

return (len);
}



/**
 * printf_percent - prints an integer
 * @list: argument list
 * Return: number of characters printed
 */



/**
 * printf_rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int printf_rot13(va_list list)
{
int i;
int x;
char *str;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

str = va_arg(list, char *);
if (str == NULL)
return (-1);
for (i = 0; str[i] != '\0'; i++)
{
for (x = 0; x <= 52; x++)
{
if (str[i] == s[x])
{
_putchar(u[x]);
break;
}
}
if (x == 53)
_putchar(str[i]);
}
return (i);
}

int printf_percent(__attribute__((unused))va_list list)
{
_putchar('%');
return (1);
}
