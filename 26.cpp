#include<stdio.h>
int main(){
	int a;
	int *ptr;
	a=10;
	ptr=&a;
	*ptr=*ptr+1;
	printf("the value of ptr is %d\n",*ptr);
	printf("the value of a is %d\n",a);
	
	
	
}
