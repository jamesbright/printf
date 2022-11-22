#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/* Flag Modifier Macros */
#define PLUS 1
#define SPACE 2
#define HASH 4
#define ZERO 8
#define NEG 16
#define PLUS_FLAG (flags & 1)
#define SPACE_FLAG ((flags >> 1) & 1)
#define HASH_FLAG ((flags >> 2) & 1)
#define ZERO_FLAG ((flags >> 3) & 1)
#define NEG_FLAG ((flags >> 4) & 1)

/* Length Modifier Macros */
#define SHORT 1
#define LONG 2

/**
 * struct flag_b - A new type defining a flags struct.
 * @flag: A character representing a flag.
 * @value: The integer value of the flag.
 */
typedef struct flag_b
{
	unsigned char flag;
	unsigned char value;
} flag_k;

/**
 * struct buffer_b - new type defining a buffer struct.
 * @buffer: pointer to a character array.
 * @start: pointer to the start of buffer.
 * @length: length of the string stored in buffer.
 */
typedef struct buffer_b
{
	char *buffer;
	char *start;
	unsigned int len;
} buffer_k;


/**
 * struct conv - a structure for symbols and functions
 * @sym: a symbol
 * @func: function associated with the system
 */

typedef struct conv
{
char *sym;
int (*func)(va_list);
} conv_f;

int _putchar(char c);
int _strcmp(char *, char *);
int selector(const char *format, conv_f func[], va_list list);
int _printf(const char *format, ...);
int printf_char(va_list);
int printf_rot13(va_list list);
int printf_string(va_list);
int printf_revstring(va_list);
int printf_percent(va_list);
int printf_integer(va_list i);
int printf_decimal(va_list dec);
unsigned int _baselen(unsigned int num, int base);
int write_buffer(char *str);
char *strev(char *str);
char *to_ascii(long int num, int base);
int printf_binary(va_list list);
int printf_unsigned(va_list list);
int printf_octal(va_list list);
int printf_hex_lower(va_list list);
int printf_hex_upper(va_list list);
int printf_addressp(va_list list);

/*handle modifiers*/
unsigned char h_flags(const char *flag, char *f);
unsigned char h_length(const char *mod, char *f);
int h_width(va_list para, const char *mod, char *f);
int h_precision(va_list para, const char *mod, char *f);


#endif /* _MAIN_H */

