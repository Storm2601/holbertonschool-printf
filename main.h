#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* struct myprintf - Description of struct name typedef
* @letter: type of format
* @c: parameter of c = 'Char' its caracter
* @myprintf_t: function create print with _putchar
*/

typedef struct myprintf
{
	char letter;
	int (*print)(va_list ap);
} myprintf_t;

/**
* prototypes
*/

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(__attribute__((unused)) va_list ap);
int print_decimal(long int n, int count)
int print_integers(va_list ap);



#endif
