#include<stdio.h>
int main()
{
	int l,a;
	printf("enter the length in km");
	scanf("%d",&l);
	printf("in which measurement you want to convert\n");
	printf("for inch enter 1\n  for feet enter 2\n for meter enter 3\n");
	scanf("%d",&a);
	switch(a)
	{
		case(1):
			l = l *39370;
			printf("the length in inches is  %d \n",l);
			break;
		
		case(2):
			l = l *3281;
			printf("the length in feet is  %d \n",l);
			break;	
			
		case(3):
			l = l *1000;
			printf("the length in meter is  %d \n",l);
			break;
		
			
	}
}
