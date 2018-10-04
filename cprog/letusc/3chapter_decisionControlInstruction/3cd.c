#include <stdio.h>

int main()
{
   int yr, leapdays;
   long int totaldays, normaldays;

   printf("Enter a year:");
   scanf("%d", &yr);

   normaldays = (yr-2001)*365;

/* 
CALCULATION OF EXTRA DAYS TO BE ADDED FOR EVERY LEAP YEAR
---------------------------------------------------------

        leapdays = Term1 - Term2 + Term3; 
i.e.,   leapdays = (yr-2001)/4 - (yr-2001)/100 + (yr-2001)/400; 

-> Term-1 in the expression below adds all the leap years that occur between 2001 and 
   the entered 'yr' at 4 year intervals. 
-> Term-2 removes from the Term-1, all those years which are multiples of 100. E.g. If
   yr = 2142 is entered, then there is one year between 2001 and 2142 that is a multiple
   of 100, i.e., the year 2100 which is automatically counted in Term-1 but it is not a 
   leap year. Hence we must remove that extra day. 
-> Term-3 adds to Term-1, all those years which are multiples of 400. E.g. If
   yr = 2406 is entered, then there is one year between 2001 and 2406 that is a multiple
   of 400, i.e., the year 2400 which is automatically counted in Term-1 but removed by 
   Term-2 because 2400 is both a multiple of 100 and 400. Hence Term-3 adds back those 
   multiples of 400 which were removed by Term-2. 
*/

   leapdays = (yr-2001)/4 - (yr-2001)/100 + (yr-2001)/400; 

   totaldays = normaldays + leapdays;   
   
   
   if (totaldays%7 == 0)
      printf("The 1st of January of the year you have entered is a Monday.\n");
   if (totaldays%7 == 1)
      printf("The 1st of January of the year you have entered is a Tuesday.\n");
   if (totaldays%7 == 2)
      printf("The 1st of January of the year you have entered is a Wednesday.\n");
   if (totaldays%7 == 3)
      printf("The 1st of January of the year you have entered is a Thursday.\n");
   if (totaldays%7 == 4)
      printf("The 1st of January of the year you have entered is a Friday.\n");
   if (totaldays%7 == 5)
      printf("The 1st of January of the year you have entered is a Saturday.\n");
   if (totaldays%7 == 6)
      printf("The 1st of January of the year you have entered is a Sunday.\n");

return 0;
}


