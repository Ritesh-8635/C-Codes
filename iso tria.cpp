#include<stdio.h>
int main()
{
	int base,height;
	float area ;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the height");
	scanf("%d",&height);
	area = 0.5 * base * height ;
	printf("the area of the triangle is %.2fl\n",area);
	
}
