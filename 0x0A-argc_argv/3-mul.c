#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
*/
int main(int argc, char *argv[])
{
int num1, num2, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if ((num1 == 0 && argv[1][0] != '0') || (num2 == 0 && argv[2][0] != '0'))
{
printf("Error\n");
return (1);
}

prod = num1 *num2;
printf("%d\n", prod);

return (0);
}
