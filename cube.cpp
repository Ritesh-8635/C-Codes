

#include<stdio.h>
int cube(int a);
int main(){
	int n;
	printf("enter the number :\n");
	scanf("%d",&n);
	n=cube(n);
	printf("the result is :%d\n",n);
	
}
int cube(int a){
	int c=a*a*a;
	return c;
}
