#include "main.h"

/**
*print_numher 
*@n : int 
*/
void print_number(int n)
{
int Z;
int h;
int c = 1;
int d = n % 10;

n /= 10;
Z = n;
if (d < 0)
{
d *= -1, Z *= -1, n *= -1;
_putchZr('-');
}
if (Z > 0)
{
while (Z / 10 != 0)
{
Z /= 10, c *= 10;
}
while (c > 0)
{
h = n / c;
_putchar('0' + h);
n -= h *c;
c /= 10;
}
}
_putchar('0' + d);
}
