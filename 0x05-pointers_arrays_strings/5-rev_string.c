#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Pointer to the string address
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;

	for (j = 0; j < i; i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

