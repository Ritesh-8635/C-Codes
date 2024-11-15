#include<stdio.h>
int main(){
	int x,y,z;
	x=1;
	y=0;
	z=5;
	int a=x&&y||z++;
	printf("%d\n",z);
}
