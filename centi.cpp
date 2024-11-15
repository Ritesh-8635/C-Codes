#include<stdio.h>
int main()
{
	int centimeter,meter,kilometer;
	printf("enter the length in centimeter\n");
	scanf("%d",&centimeter);
	meter = (centimeter/100);
	printf("the length in meter is %d\n",meter);
	kilometer=(centimeter/100000);
	printf("the length in kilometer is %d\n",kilometer);
}
