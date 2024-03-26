#ifndef MAIN_H
#define MAIN_H

//PROTOTYPE _printf
void _printf(const char *format, ...);

//PROTOTYPE _putchar
int _putchar(char c);

//PROTOTYPE print_character
int print_character(va_list ap);
int print_string(va_list ap);
int print_pourcentage(va_list ap);
int print_integer(va_list ap);

#endif