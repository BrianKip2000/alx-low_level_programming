#include "main.h"
/**
 * puts2 - Skips 1 char and prints the next
 * @str: String to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar(10);
}

