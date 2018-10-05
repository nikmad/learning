#include <stdio.h>

int main()
{
   int i=1, n, count1=0, count2=0, count3=0;
   float p;

   printf("How many numbers do you want to enter? ");
   scanf("%d",&n);

   while(i<=n)
   {
      scanf("%f", &p);
      p>0? (count1++):(p<0?(count2++):(count3++));
      i++;
   }

   printf("Count of positives, negatives and zeros = %d, %d, %d respectively.\n", count1, count2, count3);

   return 0;
}
