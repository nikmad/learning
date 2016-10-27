/*Program for Chapter 1, Exercise F, problem a */

#include <stdio.h>

int main()
{

float s_basic, DA, HRA, s_gross; 

printf("Enter basic salary of Ramesh: ");
scanf("%f", &s_basic);

DA = 0.4 * s_basic;
HRA = 0.2 * s_basic;

s_gross = s_basic + DA + HRA;
printf("Dearness Allowance of Ramesh is Rs. %f\n", DA); 
printf("House Rent Allowance of Ramesh is Rs. %f\n", HRA); 
printf("Gross salary of Ramesh is Rs. %f\n", s_gross); 


return 0;

} 
