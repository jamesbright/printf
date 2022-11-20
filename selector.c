#include "main.h"

/**
 * selector - accepts all required parameter to print a formated string
 * @format: a string of characters
 * @func: a list of possible functions
 * @list: a list of all program arguments
 * Return: total number of characters printed
 */

int selector(const char *format, conv_f func[], va_list list)
{
int i, j, val, print_count;

print_count = 0;

/*iterate through th whole string*/
for (i = 0; format[i] != '\0'; i++)
{

/*if we come across first %*/
if (format[i] == '%')
{
/*find the right function to call according to the specifier*/
for (j = 0; func[j].sym != NULL; j++)
{
/*if we find a format specifier*/
if (format[i + 1] == func[j].sym[0])
{
/*call the associated funcion and get the return val*/
val = func[j].func(list);
if (val == -1)
return (-1);

print_count += val;
break;

}
}
if (func[j].sym == NULL && format[i + 1] != ' ')
/*could be \n or \t etc, print it*/
{

if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
print_count += 2;
}
else
return (-1);
}
/*skip format symbols*/
i += 1;
}
else
{
_putchar(format[i]);
print_count++;
}
}
return (print_count);
}
