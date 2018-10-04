#include <stdio.h>

int main()
{
   int i=0, work_t, overpay; //work_t = total number of hours worked

   while(i<10)
   {
      printf("Enter hours worked by Employee-%d: ", i+1);
      scanf("%d", &work_t);
      
      if(work_t>40)
         overpay = (work_t-40)*12;
      else 
         overpay = 0;

      printf("Overtime paid to Employee-%d is Rs.%d\n", i+1, overpay);
      
      i++;
   }

   return 0;
}






   


