//sum of digits of a 5 digit number

#include <stdio.h>

int main()
{

int num5, sum5=0;
int i;

printf("Enter a five digit number: ");
scanf("%d", &num5);

for(i=0; i<5; i++)
{
   sum5 += num5 % 10;
   num5 = num5/10;
}

printf("The sum of digits = %d\n", sum5);

return 0;
}
