#include <stdio.h>

int main()
{
   int a,b,c,max;

   printf("Enter any three numbers:\n");
   scanf("%d%d%d",&a,&b,&c);

   //b>max?(c>b?(max=c):(max=b)):(c>max?(max=c):(max=a));
   //Above line works but more elegant expression is below
   max = a>b?(a>c?a:c):(b>c?b:c);

   printf("The greatest of the three numbers = %d\n", max);

   return 0;
}
