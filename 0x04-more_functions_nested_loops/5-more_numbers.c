#include "main.h"

/**
* more_numbers - prints digits 0 to 14 ten times
* Return: void
*/

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			_putchar(i + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
