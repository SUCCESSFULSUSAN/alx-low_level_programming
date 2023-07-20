#include "main.h"
/**
* more_numbers - prints 10 times the numbers,
*from 0 to 14, followed by a new line.
*
* Return: Void.
*/
void more_numbers(void)
{
int i, j = 10;
while (j--)
{
for (i = 0; i <= 14; ++i)
{
	if (i >= 10)
	{
		_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
