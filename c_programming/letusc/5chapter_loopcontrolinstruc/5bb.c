#include <stdio.h>

int main()
{
   int N, num;
   unsigned long int fac;

   //factorial of 34 is beyond range of unsigned long int
   printf("Enter any number(less than 34): ");
   scanf("%d", &num);
   
   
   N = num;
   fac = num;
   
   while(num > 1)
   {
      fac *= num-1;
      num--;
   }

   printf("Factorial of %d = %lu\n", N, fac);


   return 0;
}
