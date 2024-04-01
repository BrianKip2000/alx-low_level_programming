#include "main.h"

/**
 * print_diagonal- main entry, prints diagonal line
 * @n: number of times the diagnal line is printed
*/

void print_diagonal(int n)
{
int i;
int blanks;

for (i = 0; i < n; i++)
{
for (blanks = 0; blanks < i; blanks++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');

}

if (n <= 0)
{
_putchar('\n');
}

}
