#include <stdio.h>

/**
* main - print uppercase and lowercase letters
* Description: print and enter newline
* Return: 0 if executed properly
*/

int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; ++LETTER)
		putchar(LETTER);


	putchar('\n');

return (0);
}
