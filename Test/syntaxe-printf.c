#include "main.h"

/**
 *  _printf - prints a string   
 * @format: string to print
 * @...: arguments
 * Return: number of characters printed
*/

void _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++)
    {
        if (*p == '%')
        {
            p++;
            switch (*p)
            {
            case 'd':
            {
                int i = va_arg(args, int);
                printf("%d", i);
                break;
            }
            case 'c':
            {
                int c = va_arg(args, int);
                printf("%c", c);
                break;
            }
            case 'f':
            {
                double d = va_arg(args, double);
                printf("%f", d);
                break;
            }
            case 's':
            {
                char *s = va_arg(args, char *);
                printf("%s", s);
                break;
            }
            default:
                break;
            }
        }
        else
        {
            putchar(*p);
        }
    }

    va_end(args);
}
