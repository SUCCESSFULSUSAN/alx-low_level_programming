#include "main.h"
#include <stdio.h>
/**
* print_square - prints a square, followed by a new line.
*@size: The square size.
* Return: Void.
*/
void print_square(int size)
{
	int i = 0, j = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
			if (j == size - 1 && i != j)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
