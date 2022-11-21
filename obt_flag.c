#include "main.h"

/**
 * obt_flag - to turn on flags if _printf find flag modifier
 * @src: source of flag specifier
 * @f: pointer to the flag struct
 * Return: 1 if the flag is on otherwise 0
 */

int obt_flag(char src, flags_f *f)
{
	int index = 0;

	switch (src)
	{
		case '+';
		f->plus = 1;
		index = 1;
		break;

		case ' ';
		f->space = 1;
		index = 1;
		break;

		case '#';
		f->hash = 1;
		index = 1;
		break;

		case '0';
		f->zero = 1;
		index = 1;
		break;

		case '-';
		f->negative = 1;
		index = 1;
		break;
	}
	return (index);
}
