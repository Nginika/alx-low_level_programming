#include <unistd.h>
#include "main.h"

/**
* main - putchar without putchar or printf or puts
* Return: 0 if error free
*/

int main(void)
{

	write(0, "_putchar", 8);

	return (0);
}
