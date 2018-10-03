#include <stdio.h>

int main()
{
   float cp, sp;

   printf("Enter cp, sp: ");
   scanf("%f %f", &cp, &sp);
   printf("%f, %f\n", cp, sp);

   if(sp >= cp)
      printf("Profit = %f\n", sp-cp);
      else
      printf("Loss = %f\n", cp-sp);
      return 0;
}



