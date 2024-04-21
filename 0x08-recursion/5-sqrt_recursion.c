#include "main.h"


/**
 * _sqrt_recursion_helper - ftn to help determine the sqrt
 * @n: int decl
 * @start: starting integer
 * @end: ending or last int
 * Return: returns a value
*/

int _sqrt_recursion_helper(int n, int start, int end);
/**
 * _sqrt_recursion - funct for finding natural sqrt of no.
 * @n: int declaration, will be found the sqrt
 * Return: return the sqrt of the no if exists
*/


int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

else if (n == 0 || n == 1)
{
return (n);
}

else
{
return (_sqrt_recursion_helper(n, 1, n / 2));
}
}

/**
 * _sqrt_recursion_helper - ftn to help determine the sqrt
 * @n: int decl
 * @start: starting integer
 * @end: ending or last int
 * Return: returns a value
*/

int _sqrt_recursion_helper(int n, int start, int end)
{
if (start > end)
{
return (-1);
}

int mid = (start + end) / 2;

/*If mid^2 equals n, mid is the natural square root*/
if (mid * mid == n)
{
return (mid);
}

/*If mid^2 is greater than n, search in the lower half*/
if (mid * mid > n)
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}

/*If mid^2 is less than n, search in the upper half*/
return (_sqrt_recursion_helper(n, mid + 1, end));
}
