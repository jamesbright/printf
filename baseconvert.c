#include "main.h"


/**
 * convert_b - to convert base numbers into strings
 * @digit: inputed numbers
 * @base: base number
 * @lowca: lower case for hex numbers
 * Return: string result.
 */

char convert_b(unsigned long int digit, int base, int lowca)
{
	static char *dest;
	static char space[50];
	char *fptr;

	dest = (lowca)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	fptr = &space[49];
	*fptr = '\0';
	do {
		*--fptr = dest[digit % base];
		digit /= base;
	} while (digit != 0);

	return (fptr);

}
