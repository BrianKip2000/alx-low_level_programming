#include <stdio.h>
#include <stdlib.h>


/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{

int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

char *end;
long num = strtol(argv[i], &end, 10);

if (*end != '\0')
{
printf("Error\n");
return (1);
}

if (num < 0)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);
return (0);

}
