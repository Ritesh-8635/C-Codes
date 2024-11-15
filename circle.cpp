#include<stdio.h>
int main()
{
	short radii,diameter,circumference,area;
	printf("enter the radius");
	scanf("%hi",&radii);
	
	diameter =2*radii;
	printf("the diameter is %hi\n ",diameter);
	circumference =2*radii*(22/7);
	printf("the circumference is  %hi\n ",circumference);
	area =2*(radii*radii);
	printf("the area is %hi\n ",area);
}
