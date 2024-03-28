#include "main.h"

/**
* print_number - print number
* @n: integer
* @char_num: size for printf
* Return: nothing
*/

int print_number(int n, int *char_num)
{
	unsigned int num;

	if (n < 0)
	{
		n *= -1;
		*char_num += 1;
		_putchar('-');
	}
	num = n;
	if (num / 10)
	{
		print_number(num / 10, char_num);
	}
	*char_num += 1;
	_putchar((num % 10) + '0');
}
