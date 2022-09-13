#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: begin to count from here
* Return: 0 after run
*/

void print_to_98(int n)

{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
