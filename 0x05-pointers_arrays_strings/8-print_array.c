#include "main.h"
/**
 * print_array - Function that prints an array
 * @a: Array to be printed
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
