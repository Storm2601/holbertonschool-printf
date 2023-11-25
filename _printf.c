#include "main.h"
#include <stdio.h>

/**
* _printf - Its a printer with use functions
* @format: format of function
* Return:(SUCCES)
*/

int _printf(const char *format, ...)
{
	int i = 0, j, printed_char = 0;
	va_list ap;
	myprintf_t list[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			i++;
			while (list[j].letter != '\0')
			{
				if (list[j].letter == format[i])
				{
					printed_char += list[j].print(ap);
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		}
		i++;
			}
	return (printed_char);
}
