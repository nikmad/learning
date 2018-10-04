#include <stdio.h>
#include <math.h>

int main()
{
   float p, total;
   int N, dis=0;

   printf("Enter the quantity and price per item: ");
   scanf("%d, %f", &N, &p);


   if(N>1000)
      dis = 10;

   total = N*p-N*p*dis/100; //total expense
   
   printf("Total Expense = Rs. %f\n", total);
   return 0;
}

