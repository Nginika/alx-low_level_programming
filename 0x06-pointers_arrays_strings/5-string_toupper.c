#include "main.h"

/**
 * string_toupper - changes lower case to uppercase
 * @str: string to check
 * Return: a pointer to the uppercase string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
