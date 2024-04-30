#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
*main - main header file
*@argc: counter
*@argv: system info e.g gcc
*Return: 0 for successful compilation
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
else
{
printf("No Arguments\n");
}

return (0);
}
