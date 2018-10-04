#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327

int main()
{
   double x, conv, xrad, sumsq;
   
   printf("Enter an angle in degree = ");
   scanf("%lf", &x);
   conv = M_PI/180;
   xrad = sin(x*conv);

   printf("xrad = %lf\n", xrad);

   sumsq = sin(xrad)*sin(xrad) + cos(xrad)*cos(xrad);
   printf("sumsq = %lf\n", sumsq);

   
   return 0;
}
