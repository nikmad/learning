//This program not only finds the youngest as asked by the question but also finds order of all the persons in descending order.

#include <stdio.h>

int main()
{
   int r, s, a;

   printf("Enter ages of r, s, a: ");
   scanf("%d %d %d", &r, &s, &a);

   if(r >= s && r >= a)
         {
            if(s >= a)
            printf("r >= s >= a\n");
            else 
            printf("r >= a >= s\n");
         }
   if(s >= r && s >= a)
         {
            if(r >= a)
            printf("s >= r >= a\n");
            else 
            printf("s >= a >= r\n");
         }
   if(a >= r && a >= s)
         {
            if(r >= s)
            printf("a >= r >= s\n");
            else 
            printf("a >= s >= r\n");
         }          
return 0;
}


