#include<stdio.h>
int main(){
	int x,*p;
	x=10;
	p=&x;
	*p=20;
	printf("%d\n",x);	
}
