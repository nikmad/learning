#include <stdio.h>

int main()
{
   int i=1, a, b, pow;

   printf("Enter a and b: ");
   scanf("%d %d", &a, &b);
   pow = a;

   while(i<b)
   {
      pow *= a;
      i++;
   }

   printf("%d ^ %d = %d\n", a, b, pow);

   return 0;
}
