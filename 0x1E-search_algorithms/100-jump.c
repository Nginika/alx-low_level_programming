#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, -1 if nor present or null
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, end = 0;

	if (array == NULL)
		return (-1);

	while (array[end] < value && end < size)
	{
		prev = end;
		end += step;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, end);

	while (prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
