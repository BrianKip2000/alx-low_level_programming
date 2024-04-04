#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
char c;
int n;
long int li;
long long int lli;
float f;

printf("Size of char: %lu byte(s)\n", sizeof(c));
printf("Size of int: %lu byte(s)\n", sizeof(n));
printf("Size of long int: %lu byte(s)\n", sizeof(li));
printf("Size of long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of float: %lu byte(s)\n", sizeof(f));

return (0);
}
