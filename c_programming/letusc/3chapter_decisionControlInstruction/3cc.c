#include <stdio.h>

int main()
{
   int yr;

   printf("Enter a year:");
   scanf("%d", &yr);

   if(yr%4 == 0)
   {
      if(yr%100 != 0)
      printf("The year you have entered is a leap year.\n");
      else
         if(yr%400 == 0)
            printf("The year you have entered is a leap year.\n");
            else 
               printf("The year you have entered is not a leap year.\n");
    }
    else 
       printf("The year you have entered is not a leap year.\n");
                  

      return 0;
}

