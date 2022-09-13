#include <unistd.h>
#include "main.h"

/**
* main - putchar without putchar or printf or puts
* Return: 0 if error free
*/

int main(void)
{

	write(1, "_putchar", 9);

	return (0);
}
