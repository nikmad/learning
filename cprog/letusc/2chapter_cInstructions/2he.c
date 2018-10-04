
#include <stdio.h>
#include <math.h>

int main()
{

   float L1, L2, G1, G2, D;
   
   printf("Enter the latitude and longitude (L1,G1) of point-1 on earth (enter in degrees): ");
   scanf("%f,%f", &L1, &G1);
   printf("Enter the latitude and longitude (L2,G2) of point-2 on earth (enter in degrees): ");
   scanf("%f,%f", &L2, &G2);
  
  
   //Converting degree to radians using 'pi' value M_PI=3.141593 proivided by math.h
   L1 = L1*M_PI/180;
   L2 = L2*M_PI/180;
   G1 = G1*M_PI/180;
   G2 = G2*M_PI/180;

   //Distance between point 1, 2 in nautical miles:
   
   D = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1)); 
   printf("Distance between points 1 and 2 on Earth = %f nautical miles.\n", D);
    
   //Syntax of the functions used are as follows:
   //double acos(double x)
   //double cos(double x). Note that argument x has to be in radians.

   return 0; 
}
