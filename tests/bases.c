#include "../main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int num1 = 2;
int num2 = 576;
int num3 = -56;
int ui  = (unsigned int)INT_MAX + 1024;


    _printf("Unsigned octal:[%o]\n", ui);
     _printf("Unsigned:[%u]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

_printf("num1: %b\n", num1);
_printf("num1: %b\n", num1);

_printf("num2: %b\n", num2);
_printf("num3: %b\n", num3);

return (0);
}

