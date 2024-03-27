#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct choice
{
	char *str;

	int (*func)(va_list);
}
choice;

/* PROTOTYPE _printf */
int _printf(const char *format, ...);

/* PROTOTYPE _printf syntax choice caractere */
void _syntaxprintf(const char *format, ...);

/* PROTOTYPE _putchar */
int _putchar(char c);

/* PROTOTYPE print_character and decimal_character */
int print_character(va_list ap);
int print_string(va_list ap);
int print_pourcentage(va_list ap);
int print_integer(va_list ap);

#endif
