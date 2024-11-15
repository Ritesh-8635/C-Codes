#include<stdio.h>
int main()
{
	int side1,side3,side3,total;
	printf("enter the side length");
	scanf("%d",&side1);
	printf("enter the side2length");
	scanf("%d",&side2);
	printf("enter the side3length");
	scanf("%d",&side3);
	total=side1 + side2+ side3;
	if(total==180)
	{
		printf("the triangle is valid");
	}
	else
	{
		printf("the traingle is not valid");
	}
}
