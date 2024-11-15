#include<stdio.h>
int main()
{
	int a,b,sum,mul,subt,div,mod;
	printf("enter two num");
	scanf("%d%d",&a,&b);
	sum = a+b;
	printf("the sum is %d\n",sum);
	mul = a*b;
	printf("the mul is %d\n",mul);
	subt = a-b;
	printf("the subt is %d\n",subt);
	div = a/b;
	printf("the div is %d\n",div);
	mod = a%b;
	printf("the mod is %d\n",mod);
}
