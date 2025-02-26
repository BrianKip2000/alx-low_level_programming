#include "main.h"
/**
 * print_alphabet - Prints alphabets from a to z
 *
 * Return: 0 for success
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}

