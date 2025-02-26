#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}

