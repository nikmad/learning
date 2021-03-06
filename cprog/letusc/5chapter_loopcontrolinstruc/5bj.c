#include <stdio.h>

int main()
{
   int a, b, c, max, min;
   char ch = 'y';

   printf("Enter any number: ");
   scanf("%d", &a);
   printf("Enter another number: ");
   scanf("%d", &b);
   if(a>=b)
   {
      max = a;
      min = b;
   }
   else 
   {
      max = b;
      min = a;
   }
   
   while(ch=='y')
   {
      printf("Enter 'y' if you want to enter one more number, or 'n' if you don't want to: ");
      scanf("\n%c", &ch); 
      
      /* newline character in this scanf statement is intentionally inserted. Otherwise, after scanning for 'b' above, 
      when we press enter, the scanf of 'ch' will take that previous 'Enter' as the character input for 'ch' and 
      would not prompt you to enter y/n for 'ch'. To circumvent this issue, we use \n so that scanf will ignore one 
      'Enter' and then ask you for an input y/n. */
      
      if(ch=='y')
      {
         printf("Enter another number: ");
         scanf("%d", &c);
         c>=max? (max=c):(c<min?(min=c):(printf("This number is neither max nor min.\n")));
      }
   }

   printf("Min, Max = %d, %d\n", min, max);
   printf("Range (i.e., max-min) = %d\n", max-min);

   return 0;
}


