#include <math.h>
#include <stdio.h>

int main()
{
   int y, x =5;
   y = 1 << x; 
   //The way the built-in '<<'operator in C works is so funny. The expression 1<<x is simply 
   //equivalent of 2^x. So if you use 2<<x, it simply means 2*(2^x)
   printf("Value of a = %d\n", y);
   
   return 0;
}
