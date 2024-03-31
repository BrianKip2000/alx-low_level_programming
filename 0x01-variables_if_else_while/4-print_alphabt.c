#include <stdio.h>

/**
 * main- Main entry point
 * Return: returns 0 if all checks are passed
*/

int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar(10);
return (0);
}
