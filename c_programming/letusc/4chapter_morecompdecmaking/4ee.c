#include <stdio.h>

int main(){

   float sal; 
   
   printf("Enter the salary = ");
   scanf("%f", &sal);

   sal < 15000? (printf("Clerk\n")):(sal<=40000?(sal>=25000?(printf("Manager\n")):(printf("Accountant\n"))):(printf("No job role is paid so much in our company.\n")));

   //more elegant solution in the book. He used && operator even withing conditional operation to shorten the expression.

   return 0;
}
