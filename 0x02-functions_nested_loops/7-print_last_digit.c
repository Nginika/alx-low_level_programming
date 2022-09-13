#include "main.h"

/**
* print_last_digit - print last digit of a number
* @n: number to check for last digit
* Return: the last digit
*/

int print_last_digit(int n)
{

	while (n >= 10)
	{
		n = n / 10;
	}
	return (n);

}
