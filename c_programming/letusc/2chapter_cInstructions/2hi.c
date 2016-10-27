
#include <stdio.h>
#include <math.h>

int main()
{
   int N, n; // n denotes the minimum number of notes to create an amount equivalent of Rs.N

   printf("Enter an amount of cash: Rs.");
   scanf("%d", &N);

   n = N/100 + (N%100)/50 + ((N%100)%50)/10 + (((N%100)%50)%10)/5 + ((((N%100)%50)%10)%5)/2
             + (((((N%100)%50)%10)%5)%2);
   
   printf("Minimum number of notes of different denominations which can together amount to Rs.%d = %d notes\n", N, n);

   return 0;
}
