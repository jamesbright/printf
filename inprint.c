#include "main.h"

/**
* printf_integer - function that prints an integer
* @i: integer to be  printed
* Return: size the output text
*/
int printf_integer(va_list i)
{
	int length, tbase, res, dig, n, size = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
	if (n < 0)
	{
	_putchar('-');
	size++;
	}
	num = n;
	length = 0;
	while (num != 0)
	{
	num /= 10;
	length++;
	}
	tbase = 1;
	for (res = 1; res <= length - 1; res++)
	tbase *= 10;
	for (res = 1; res <= length; res++)
	{
	dig = n / tbase;
	if (n < 0)
	_putchar((dig * -1) + 48);
	else
	_putchar(dig + '0');
	size++;
	n -= dig * tbase;
	tbase /= 10;
	}
	}
	else
	{
	_putchar('0');
	return (1);
	}
	return (size);
}
