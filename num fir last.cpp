#include<stdio.h>
int main()
{
	int num,originalnum;
	printf("enter the number  \n");
	scanf("%d",&num);
	
	int firstdigit,lastdigit,divisor=1;
	lastdigit=num%10;
	printf("the lastdigit is %d\n",lastdigit);
	originalnum=num;
	if(num==0)
	{
		printf("the first digit is 0\n");
	}
	firstdigit=num;
	for(num>=0;num/=10;)
	{
		divisor*=10;
		
	}
	
	printf("the first digit  is %d\n",firstdigit);
	
	int sum=0;
	sum=firstdigit + lastdigit ;
	printf("the sum is %d\n",sum);
	
	int swap=lastdigit*divisor+(originalnum%divisor)-lastdigit+firstdigit;
	printf("%d\n",swap);
}
