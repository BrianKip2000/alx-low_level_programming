#include "main.h"
/**
 * puts_half - Prints out half of the string
 * @str: String to be split
 */
void puts_half(char *str)
{
	int i = 0, lenght, mid;

	while (str[i] != '\0')
		i++;

	lenght = i;
	mid = (lenght % 2 == 0) ? lenght / 2 : (lenght / 2) + 1;

	for (i = mid; mid < lenght ; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar(10);
}

