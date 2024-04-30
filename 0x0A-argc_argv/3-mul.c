#include <stdio.h>
#include <stdlib.h>

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
