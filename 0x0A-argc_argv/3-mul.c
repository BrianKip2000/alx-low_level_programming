#include <stdio.h>
#include <stdlib.h>


/**
 *main - checks code if its working
 *@argc: counter
 *@argv: 1-D vector
 *Return: 0 for success 1 for fail
 */
int main(int argc, char *argv[])
{
int i, prod = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
prod *= atoi(argv[i]);
}
printf("%d\n", prod);
}
else if (argc <= 1)
{
printf("Error\n");
return (1);
}

return (0);
}
