#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_char - function to print char
*@ap: list of char
* Return: return the number of elements
*/

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar (c);
	return (1);
}

/**
* print_string - function to print string
* @ap: list of string
* Return: return the number of elements
*/

int print_string(va_list ap)
{
	int i;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != "\0"; i++)
		_putchar(s[i]);
	return (i);
}

/**
* print_percent - function to print percent
* @ap: list of percent
* Return: 1
*/

int print_percent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}

/**
* print_decimal - print int digit
* @n: number
* @count: digit counter
* Return: return the digit counter
*/
int print_decimal(long int n, int count)
{
	int digit = count;

	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	if (n / 10)
	{
		digit = print decimal(n / 10, count + 1);
	}
	_putchar(n % 10 + '0');
	return (digit);
}

/**
* print_integers - print int
* @ap: list of elements
* Return: return the value
*/

int print_integers(__attribute__((unused)) va_list ap);
{
	long int n;

	n = va_arg(list, int);
	if (n < 0)
		return (print_decimal(n, 2));
	return (print_decimal(n, 1));
}
