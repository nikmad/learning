#include <stdio.h>

int main()
{
   int i=1, a, b, c, cubsum;

   /*Book Solution is much simpler. I have done it in 3 steps 1-9, 
   10-99 and 100-500 whereas his solution does in single step yet 
   makes lot of sense than mine.*/
   while(i<=500)
   {
      if(i<10)
      {
         cubsum = i*i*i;
         if(i==cubsum)
            printf("%d\n", i);
      }
      else if(i<100)
      {
         a = i%10;
         b = (i-a)/10;
         cubsum = (a*a*a) + (b*b*b);
         if(i==cubsum)
            printf("%d\n", i);
      }
      else if(i<=500)
      {
         a = i%10;
         b = ((i-a)/10)%10;      
         c = (i-i%100)/100;
         cubsum = (a*a*a) + (b*b*b) + (c*c*c);
         if(i==cubsum)
            printf("%d\n", i);
      }

      i++;
   }
   
   return 0;
}

