// converting cartesian coordinates to polar coordinates

#include <stdio.h>
#include <math.h>

int main()
{
   float x, y, r, phi;

   printf("Enter the cartesian coordinates x,y: ");
   scanf("%f,%f", &x, &y);

   r = sqrt(x*x+y*y);
   phi = atan2(y,x); //phi will be in radians
   
   printf("Cartesian coordinates x,y converted into polar coordinates = (%f,%f)\n", r, phi);  

   return 0;
}

