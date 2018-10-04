//Area of triangle. Given 3 sides.

#include <stdio.h>
#include <math.h>

int main()
{
   float a, b, c, area_t, sp;

   printf("Enter the lengths of 3 sides of triangle: ");
   scanf("%f %f %f", &a, &b, &c);

   sp = (a+b+c)/2;
   area_t = sqrt(sp*(sp-a)*(sp-b)*(sp-c));

   printf("Area of the triangle = %f\n", area_t);

   return 0;
}
