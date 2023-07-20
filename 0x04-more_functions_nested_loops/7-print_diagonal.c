#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
*@n: the number of times the character '\' should be printed.
* Return: Void.
*/
void print_diagonal(int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
				_putchar(' ');
		}
		if (i != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
