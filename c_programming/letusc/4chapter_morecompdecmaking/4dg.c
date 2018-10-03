#include <stdio.h>

float Max(float, float, float);

int main()
{
   int R,G,B;
   float a,b,c;
   float C,M,Y,K,W;

   printf("Enter R, G, B = ");
   scanf("%d %d %d",&R,&G,&B);

   a = R/255.0;
   b = G/255.0;
   c = B/255.0;


// W = Max(R / 255.0, G / 255.0, B / 255.0);
// W = Max(a, b, c);
// printf("Value of W = %f\n", W);
// printf("Value of W1 = %f\n", 255/255.0);
   printf("Values of a,b,c = %f,%f,%f\n", a, b, c);


   if(R==0 && G==0 && B==0)
   {
      C = 0.0;
      M = 0.0;
      Y = 0.0;
      W = 0.0;
      K = 1.0;
      printf("I'm inside trivial case\n");
   }
   else
   {
      //W = Max(R/255.0,G/255.0,B/255.0);
      W = Max(a, b, c);
      printf("Value of W = %f\n", W);
      C = ((W-R/255.0)/W);
      M = ((W-G/255.0)/W);
      Y = ((W-B/255.0)/W);
      K = 1.0-W;
      printf("I'm inside NON-trivial case\n");
      }

   printf("C,M,Y,K,W = %f, %f, %f, %f, %f\n",C,M,Y,K,W);

   return 0;
}

//int main()
//{
//   float W;
//   
//   W = Max(-1.1, 0.0, -234.223);
//   printf("Value of W = %f\n", W);
//
//   return 0;
//   }

float Max(float a, float b, float c)
{
  float max;

  max = a;
  if(b>max)
     max = b;
  if (c>max)
     max = c;


//  if(a>b)
//  {
//     if(a>c)
//     result = a;
//     else
//     result = c;
//     }
//  else 
//     if(c>b)
//     result = c;
//     else 
//     result = b;

   return max;
   }
