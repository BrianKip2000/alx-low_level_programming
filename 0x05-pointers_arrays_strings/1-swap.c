#include "main.h"
/**
 * swap_int - Swap two numbers
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
