#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: input integer
 *
 * Return: output of the prime number
*/

int is_prime_number(int n)
{
int i = 2;

if (n <= 1)
{
return (0);
}

if (n == i)
{
return (1);
}

if (n % i == 0)
{
return (0);
}

i++;
return (is_prime_number(n));
}
