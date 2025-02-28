#include "main.h"
/**
 * _puts - Printsout string to user
 * @str: Memory location of string
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

