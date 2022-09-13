#include "main.h"

/**
* main - print alphabets using _putchar
* Return: 0 if error free
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);

	_putchar('\n');

	return;
}
