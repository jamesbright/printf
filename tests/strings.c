#include "../main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int len;
int len2;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");


_printf("%s %c\n", "Let's try to printf a simple sentence",'F');

_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

printf("String Len:[%d]\n", len);
printf("String Len2:[%d]\n", len2);

_printf("%%");

 _printf("Reversed string: %r", " Let's try to printf a simple sentence.\n");
return (0);
}
