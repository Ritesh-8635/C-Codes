
// C program to illustrate
// power function
#include <math.h>
#include <stdio.h>
 
int main()
{
    int x , y ;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the exponent");
    scanf("%d",&y);
    
 
    // Storing the answer in result.
    int result = pow(x, y);
    printf("%d", result);
 
    return 0;
}
