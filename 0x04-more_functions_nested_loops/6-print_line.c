#include "main.h"
/**
* print_line - draws a straight line in the terminal.
*@n: number of '_' to be printed.
* Return: Void.
*/
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
