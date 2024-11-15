#include<stdio.h>
int diameter(int radius);

int circumference(int radius);

int area(int radius);

int main(){
	int rad;
	printf("enter the radius :\n");
	
	scanf("%d",&rad);
	rad=diameter(rad);
	
	printf("the diameter is :%d\n",rad);
	
	rad=circumference(rad);
	printf("the circumference is :%d\n",rad);
	
	rad=area(rad);
	printf("the area is :%d\n",rad);
	
	
}
int diameter(int radius){
	int c=radius*2;
	return c;
}
int circumference(int radius){
	int d=2*(22/7)*radius;
	return d;
	
}

int area(int radius){
	int a=(22/7)*radius*radius;
	return a;
}
