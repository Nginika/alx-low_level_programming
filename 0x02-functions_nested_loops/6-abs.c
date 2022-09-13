#include "main.h"

/**
* _abs - print absolute values of integers
* @n: number to return absoluteness
* Return: 0 for 0 and positive numbers and -1 for negative
*/

int _abs(int n)
{

	if (n >= 0)
	{
		_putchar(n);

		return (0);
	}
	else
	{
		n = n + (2 * n);

		_putchar(n);

		return (-1);
	}
}
