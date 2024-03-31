#include "main.h"

/**
 * print_alphabet- print the a to z chr
 * return: returns 0 for no errors
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
