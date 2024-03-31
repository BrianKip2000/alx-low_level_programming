#include <stdio.h>

/**
 * main - main entry point
 * Return: returns 0 if all checks are okay
*/

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar("/n");
return (0);
}
