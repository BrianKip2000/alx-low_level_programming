#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: input integer
 *
 * Return: output of the prime number
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

if (n == 2)
{
return (1);
}

if (n % 2 == 0)
{
return (1);
}

n++;
return (is_prime_number(n));
}
