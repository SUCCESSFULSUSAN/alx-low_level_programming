#include <stdio.h>
void print_it(void) __attribute__ ((constructor));
/**
* Print_it - Prnits a text before main.
*/
void print_it(void)
{
	char *s = "You're beat! and yet, you must allow,\nI bore my house upon my ";
	char *s2 = "back!\n";

	printf("%s%s", s, s2);
}
