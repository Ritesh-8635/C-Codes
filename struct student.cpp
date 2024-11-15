#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int age;
	int total_marks;
};

int main(){
	student st[2];
	int i;
	int mark1,mark2;
	for(i=0;i<2;i++){
		printf("enter the name of %d student \n",i+1);
		scanf("%s",st[i].name);
		printf("enter the age of %d student\n",i+1);
		scanf("%d",&st[i].age);
	}
	printf("enter the total marks of 1st student\n");
	scanf("%d",&st[0].total_marks);
	mark1=st[0].total_marks;
	
	printf("enter the total marks of 2nd student\n");
	scanf("%d",&st[1].total_marks);
	mark2=st[1].total_marks;
	
	for(i=0;i<2;i++){
		printf("\n name:%s\n age:%d \n total marks:%d\n",st[i].name,st[i].age,st[i].total_marks);
	}
	int avg=(mark1+mark2)/2;
	printf("%d is avg\n",avg);
	
}

