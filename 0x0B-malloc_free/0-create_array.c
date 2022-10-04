#include "main.h"
#include <stdlib.h>

/**
* create_array - creates array of characters
* @size: size of the array
* @c: character to initialize the array
* Return: null is size is 0, pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	
	if (A == '\0')
	{
		return ('\0')
	}

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}
