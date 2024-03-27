#include "main.h"

/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int char_count = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && (!format[i + 1] || format[i + 1] == '\0'))
			return (-1);
		if (format[i] == '%')
		{
			f = syntaxe-printf(format[i + 1]);

			if (f != NULL)
			{
				char_count += f(ap);
				i++;
			}
			else
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				i++;
				char_count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
		i++;
	}
	va_end(ap);
	return (char_count);
}