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

	if (size == 0 || size == NULL)
	{
		return ('\0');
	}
	A = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}
