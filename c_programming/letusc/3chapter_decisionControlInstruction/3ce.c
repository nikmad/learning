#include <stdio.h>
#include <math.h>

//For compiling this program, use "gcc 3ce.c -lm -o a.out". We have to use extra "-lm" so that math.h library is linked.

int main()
{
   int num5=0, orignum5, rnum5 = 0, i, dgt;
   //rnum5 = reversed number, dgt = extracts and stores in it, one digit at a time starting from unit's place, then ten's place so on.

   printf("Enter a 5 digit number (can be +ve or -ve integer): ");
   scanf("%d", &num5);

   orignum5 = num5; //preserving the original entered number for later use in another variable before modifying num5.

   for (i=4; i>0; i--)
   {
      dgt = num5 - (num5/10)*10;
      num5= num5/10; 
      rnum5 = rnum5 + dgt * pow(10.0, i);
   }
   
   rnum5 = rnum5 + orignum5/10000;

   printf("Here is the reversed number you dumbo!: %d\n", rnum5);

   return 0;
}
