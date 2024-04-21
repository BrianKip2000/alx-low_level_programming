#include "main.h"

/**
 * _strlen_recursion - string lenght checking
 * @s: s is the char being pointed to.
 * Return: _strlen_recursion
*/

int _strlen_recursion(char *s)
{
if (*s == ('\0'))
{
return (0);
}

return (1 +     _strlen_recursion(s + 1));

}
