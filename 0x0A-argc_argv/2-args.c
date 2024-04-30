#include <stdlib.h>
#include <stdio.h>


/**
 *main - checks the code
 *@argc: int counter
 *@argv: holds char
 *Return: 0 for no errors
 */
int main(int argc, char *argv[])
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
