#include "main.h"
/**
 * _strlen - checks for lenght of string
 * @s: Memory address of char s
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int lngt = 0;

	while (s[lngt] != '\0')
	{
		lngt++;
	}

	return (lngt);
}
