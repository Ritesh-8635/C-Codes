#include<stdio.h>
int main()
{
	int temp,faren;
	printf("enter the temp ");
	
	scanf("%d",&temp);
	faren=((9* temp)/5) + 32;
	printf("the temperature in farenheit is %d\n",faren);
}
