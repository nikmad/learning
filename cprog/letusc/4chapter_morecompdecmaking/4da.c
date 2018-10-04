#include <stdio.h>

int main()
{
   int yr;

   printf("Enter any year:");
   scanf("%d", &yr);

   if(((yr%4 == 0)&&(yr%100 != 0)) || (yr%400 == 0))
      printf("The year you have entered is a leap year.\n");
      else
         printf("The year you have entered is NOT a leap year.\n");

         return 0;
}

