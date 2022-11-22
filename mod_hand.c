#include "main.h"


unsigned char h_flags(const char *flag, char *f);
unsigned char h_length(const char *mod, char *f);
int h_width(va_list para, const char *mod, char *f);
int h_precision(va_list para, const char *mod, char *f);

/**
 * h_flags - to handle the flag with its value
 * @flag: the flag to the strings
 * @f: pointer to the string
 * Return: if the character match value otherwise 0
 */

unsigned char h_flags(const char *flag, char *f)
{
	int i, cot;
	unsigned char lag = 0;
	flag_k flags[] = {
		{'+', PLUS},
		{' ', SPACE},
		{'#', HASH},
		{'0', ZERO},
		{'-', NEG},
		{0, 0}
	};

	for (i = 0; flag[i]; i++)
	{
	for (cot = 0; flags[cot].flag != 0; cot++)
	{
	if (flag[i] == flags[cot].flag)
	{
	(*f)++;
	if (lag == 0)
	lag = flags[cot].value;
	else
	lag |= flags[cot].value;
	break;
	}
	}
	if (flags[cot].value == 0)
	break;
	}

	return (lag);
}

/**
 * h_length - to display the length of a string
 * @mod: a modifier pointer
 * @f: the index of the string
 * Return: the length modifier if sucess
 */

unsigned char h_length(const char *mod, char *f)
{
	if (*mod == 'h')
	{
		(*f)++;
		return (SHORT);
	}

	else if (*mod == 'l')
	{
		(*f)++;
		return (LONG);
	}

	return (0);
}

/**
 * h_width - check the modifier with corresponding value
 * @mod: modifier pointer
 * @f: a counter of the format string
 * Return: display the width otherwise 0
 */

int h_width(va_list para, const char *mod, char *f)
{
	int value = 0;

	while ((*mod >= '0' && *mod <= '9') || (*mod == '*'))
	{
	(*f)++;

	if (*mod == '*')
	{
	value = va_arg(para, int);
	if (value <= 0)
	return (0);
	return (value);
	}

	value *= 10;
	value += (*mod - '0');
	mod++;
	}

	return (value);
}

/**
 * h_precision - relate the modifier withthe result value
 * @para: the argument parameter
 * @mod: the string modifier
 * @f: a counter of the foemat string
 * Return: if match the value, if empty zero or neg otherwise 0
 */

int h_precision(va_list para, const char *mod, char *f)
{
	int value = 0;

	if (*mod != '.')
	return (-1);

	mod++;
	(*f)++;

	if ((*mod <= '0' || *mod > '9') && *mod != '*')
	{
	if (*mod == '0')
	(*f)++;
	return (0);
	}

	while ((*mod >= '0' && *mod <= '9') || (*mod == '*'))
	{
	(*f)++;

	if (*mod == '*')
	{
	value = va_arg(para, int);
	if (value <= 0)
	return (0);
	return (value);
	}

	value *= 10;
	value += (*mod - '0');
	mod++;
	}

	return (value);
}
