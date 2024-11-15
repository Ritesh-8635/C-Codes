#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter the length of the first side");
	scanf("%d",&side1);
	printf("enter the length of the seccond side");
	scanf("%d",&side2);
	side3 = 180-(side1+side2);
	printf("the length of third side is %d\n",side3);
}
