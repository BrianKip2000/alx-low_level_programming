#include "main.h"


/**
 * print_square- main entry
 * @size: size of square
*/
void print_square(int size)
{
int i;
int x;

for (i = 0; i < size; i++)

{
for (x = 0; x < size; x++)
{
_putchar('#');
}

_putchar('\n');

}

if (size <= 0)
{
_putchar('\n');
}

}
