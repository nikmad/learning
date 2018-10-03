#include <stdio.h>

int main()
{
   int z;

   printf("Enter an integer:");
   scanf("%d", &z);

   if(z%2 == 0)
      printf("The integer you have entered is even.\n");
      else
      printf("The integer you have entered is odd.\n");

      return 0;
}

