#include "main.h"
/**
 * rev_string - Reverse a string ftn
 * @s: Character to be reversed
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}

