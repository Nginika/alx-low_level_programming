#include <stdio.h>

/**
* main - print all hexadecimal numbers ad letters
* Description: print hexadecimal letters and numbers
* Return: 0 if executed
*/


int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; ++digit)
		putchar((digit % 10) + '0');

	for (letter = 'a'; letter <= 'f'; ++letter)
		putchar(letter);

	putchar('\n');

	return (0);
}
