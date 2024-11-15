#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,marks4,marks5,total;
	float average,percentage;
	printf("enter the marks in subject 1  ");
	scanf("%d",&marks1);
	printf("enter the marks in subject 2  ");
	scanf("%d",&marks2);
	printf("enter the marks in subject 3  ");
	scanf("%d",&marks3);
	printf("enter the marks in subject 4  ");
	scanf("%d",&marks4);
	printf("enter the marks in subject 5  ");
	scanf("%d",&marks5);
	total=marks1+marks2+marks3+marks4+marks5;
	printf("the total of the marks are  %d\n",total);
	average=total/5;
	printf("the average of the marks are  %.2fl\n",average);
	percentage=total*0.20;
	printf("the percentage of the marks are  %.2fl\n",percentage);
	
	
}
