#include <stdio.h>

/**
* main - print single digit number
* Description: print 0 to 9
* Return: 0 if executed
*/


int main(void)
{
	int digit;

	for (digit = 0; digit < 10; ++digit)
		putchar(digit);

	putchar('\n');

	return (0);
}
