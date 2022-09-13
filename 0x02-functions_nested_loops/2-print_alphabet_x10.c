#include "main.h"

/**
* print_alphabet - print alphabet using _putchar
* Description: prints lowercase letters a-z
*/

void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
			_putchar(letter);
	}

	_putchar('\n');

}
