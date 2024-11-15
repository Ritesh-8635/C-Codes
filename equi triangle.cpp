#include <math.h>
#include <stdio.h>

int main() 
{
   int number;
   double squareRoot;
   number=3;
   int side;
   float area;
   printf("enter the length of side");
   scanf("%d",&side);
   

   // computing the square root
   squareRoot = sqrt(number);

   area = (squareRoot/4) * (side *side);
   printf("the area is %.2lf",area);
}
