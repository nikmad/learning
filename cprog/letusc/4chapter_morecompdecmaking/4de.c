#include <stdio.h>

int main()
{
   float s1, s2, s3, a, b, c;

   printf("Enter the three sides s1, s2, s3 of a triangle: ");
   scanf("%f %f %f", &s1, &s2, &s3);

   if(s1 == s2 && s2 == s3)
      printf("Equilateral.\n");
      else if (s1 == s2 || s2 == s3 || s3 == s1)
         printf("Isosceles.\n");
         else //Since this 'if' is executed only after prev 'if', no 2 sides are equal. So obviously scalene.
            printf("Scalene.\n");
   
   //Testing if it is a right angled triangle
   a = (s1*s1) == (s2*s2) + (s3*s3);
   b = (s2*s2) == (s1*s1) + (s3*s3);
   c = (s3*s3) == (s1*s1) + (s2*s2);
   
   if(a||b||c)
      printf("Right-angled.\n");
   
/*NOTE: we are assuming that person inputs valid side lengths for a triangle. We'r not cross checking whether 
the length of sides form a meaningful triangle at all. If you want to include that, look for the solution
of exercise 4[d]d. So you can first add that code above these 'ifs' to check if it is a triangle and then to 
move on to check what kind of triangle it is.*/

            return 0;
}

         
