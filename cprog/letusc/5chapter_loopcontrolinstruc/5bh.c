#include <stdio.h>

int main()
{
   int p, octl=0, num, z;
   float pow = 0.1;

   printf("Enter any integer: ");
   scanf("%d", &num);
   z = num;
   
   while(z != 0)
   {
      p = z%8; //p = remainder
      z = z/8; //z = quotient
      pow *= 10;
      octl += pow*p;
   }
   
   printf("Decimal number '%d' in Octal system is '%d'.\n", num, octl);
 
   return 0;
}
