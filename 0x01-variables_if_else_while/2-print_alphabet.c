#include <stdio.h>

/**
* main - print out alphabets
* Description: print all lower case letters with putchar
* Return: 0 after execution
*/


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);

	return (0);
}
