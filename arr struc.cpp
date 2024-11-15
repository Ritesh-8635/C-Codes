#include<stdio.h>
#include<string.h>
struct book{
int id;
char name[20];
float price;
};

int main(){
	book b[];
	int i;
	p=&b[i];
	for(i=1;i<3;i++){
	printf("enter the book id :");
	scanf("%d",&b.id[i]);
	printf("enter the book name :");
	scanf("%s",&b.name[i]);
	printf("enter the book price :");
	scanf("%f",&b.price[i]);
	}
	
	book *p;

	printf("\nid :%d\n name :%s\n price:%f\n",b.id,b.name,b.price);
	printf("_________________________\nusing pointer _________________________");
	printf("id :%d\n name :%s\n price:%f\n",p->id,p->name,p->price);
}
