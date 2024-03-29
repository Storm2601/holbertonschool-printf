#include "main.h"

/**
* get_function - choose the right function
* @s: check to the string
* Return: corresponding function or NULL
*/

int (*get_function(char s))(va_list)
{
	choice_c list[] = {
	{'c', print_character},
	{'s', print_string},
	{'d', print_integer},
	{'i', print_integer},
	{'%', print_pourcentage},
	{'\0', NULL},
	};

	int i = 0;

	while (list[i].f != NULL)
	{
		if (s == list[i].letter)
		{
			return (list[i].f);
		}
		i++;
	}
	return (NULL);
}
