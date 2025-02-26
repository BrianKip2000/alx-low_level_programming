#include <stdio.h>
/**
 * main - Entry Point, prints out switched numbers, except for similar ones
 *
 * Return: Always 0(sucess)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(a);
				putchar(b);
			}
		}
	}

	putchar(10);
	return (0);
}
