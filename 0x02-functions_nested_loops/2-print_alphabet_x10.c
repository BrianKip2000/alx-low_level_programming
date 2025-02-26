#include "main.h"
/**
 * print_alphabet_x10 - Prints a to z to times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int a, b;
	
	for (b = 0; b < 10; b++)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
	}
}

