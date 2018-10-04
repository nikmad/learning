//sum of digits of a 5 digit number
//One must add "-lm" argument to gcc command so that 
//gcc can link to math.h library. Using this argument 
//is required if we wish to use variable arguments in 
// pow (x, y) instead of using constants as in pow (3.0, 2.0)
// So use $ gcc 2hb.c -lm -o out

#include <math.h>
#include <stdio.h>

int main()
{

   int num5, sum5=0;
   int i;
   
   printf("Enter a five digit number: ");
   scanf("%d", &num5);
   
   for(i=0; i<5; i++)
   {
      sum5 += num5 % 10 * pow(10,(4-i));
      num5 = num5/10;
   }
   
   printf("The sum of digits = %d\n", sum5);
   
   return 0;
}
