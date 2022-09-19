#include "main.h"

/**
* puts_half - prints the last half of a string
* @str: string to print tha last half
* Return: void
*/

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;
	while (half <= len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
