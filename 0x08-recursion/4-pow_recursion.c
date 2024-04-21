#include "main.h"
#include "math.h"

/**
 * _pow_recursion - power of two numbers
 * @x: first number
 * @y: second number
 * Return: power of x and y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));

}
