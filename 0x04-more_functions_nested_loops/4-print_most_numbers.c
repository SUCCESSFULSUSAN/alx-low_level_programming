#include "main.h"
/**
* print_most_numbers - print numbers [0..9] except 0 and 2 elements.
*
* Return: Void.
*/
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; ++i)
{
	if (i != '2' && i != '4')
	{
		_putchar(i);
	}
}
_putchar('\n');
}
