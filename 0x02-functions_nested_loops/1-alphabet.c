#include "main.h"

/**
* print_alphabet - print alphabet using _putchar
* Description: prints lowercase letters a-z
* Return: 0 if error free
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		_putchar(letter);

	_putchar('\n');

	return ();
}
