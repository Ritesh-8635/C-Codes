#include<stdio.h>
int main()
{
	int p,n,r,si;
	printf("enter the principal amount  ");
	scanf("%d",&p);
	printf("enter the time  ");
	scanf("%d",&n);
	printf("enter the rate  ");
	scanf("%d",&r);
	si=(p*r*n)/100;
	printf("the simple interest is  %d\n",si);
}
