#include<stdio.h>
int main()
{
	int total_amount;
	int count100=0;
	int count50=0;
	int count20=0;
	int count10=0;
	int count5=0;
	int count1=0;
	printf("enter the total amount");
	scanf("%d",&total_amount);
	
	if(total_amount>=100)
	{
		count100=total_amount/100;
		total_amount=total_amount%100;
		printf("the number of 100 notes is  %d\n",count100);
	}
	if(total_amount>=50)
	{
		count50=total_amount/50;
		total_amount=total_amount%50;
		printf("the number of 50 notes is  %d\n",count50);
	}
	if(total_amount>=20)
	{
		count20=total_amount/20;
		total_amount=total_amount%20;
		printf("the number of 20 notes is  %d\n",count20);
	}
	if(total_amount>=10)
	{
		count10=total_amount/10;
		total_amount=total_amount%10;
		printf("the number of 10 notes is  %d\n",count10);
	}
	if(total_amount>=5)
	{
		count50=total_amount/5;
		total_amount=total_amount%5;
		printf("the number of 5  notes is  %d\n",count5);
	}
	if(total_amount>=1)
	{
		count1=total_amount/1;
		total_amount=total_amount%1;
		printf("the number of 1 notes is  %d\n",count1);
	}
	
	
}
