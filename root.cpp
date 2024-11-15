#include <math.h>
#include <stdio.h>

int main() 
{
   int number;
   double squareRoot;

   printf("Enter a number: ");
   scanf("%d", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %d =  %.2lf", number, squareRoot);

   return 0;
}
