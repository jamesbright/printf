#include "main.h"

/**
 * printf_addressp - to print the address in hex of an inputed value
 * @para: argument parameters
 * @f: a pointer to the flag
 * Return: number of peinted characters
 */

int printf_addressp(va_list para, flags_f *f)
{
	char *sptr;
	unsigned long int p = va_arg(para, unsigned long int);

	register int num = 0;

	(void)f;

	if (!p)
	return (_puts("(nil)"));

	sptr = conver_b(p, 16, 1);
	num += _puts("0x");
	num += _puts(sptr);
	return (num);

}
