#include "main.h"

/**
* get_function - choose the corresponding function
* @s: check to the string
* @list: check to the list
* Return: corresponding function or NULL
*/

int (*get_function(char s))(va_list)
{
	choice list[] = {
	{'c', print_character},
	{'s', print_string},
	{'d', print_number},
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

