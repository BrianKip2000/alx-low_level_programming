/*
 * File: 101.c
 * auth: Kipchirchir Brian
*/
#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints error "and that piece of art is useful" to output.
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}

