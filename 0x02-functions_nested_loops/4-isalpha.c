#include "main.h"
/**
 * _isalpha - Checks if alphabet is alpha
 *@c: Character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 122) || (c >= 91 && c <= 96))
		return (1);
	return (0);
}
