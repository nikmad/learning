/*Calculation of Simple Interest*/

#include <stdio.h>

int main()

{

int p, n; 
float si, r;

/* p = 1000;
n = 3;
r = 8.5;
*/


printf("Enter the values of p, n, r: ");
scanf("%d %d %f", &p, &n, &r);

si = p*n*r/100.0;

printf("Simple Interest = %f\n", si);

return 0;
}
