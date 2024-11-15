#include<stdio.h>
#include<string.h>
struct book{
int id;
char name[20];
float price;
};

int main(){
	book b;
	b.id;
	b.name;
	b.price;
	printf("enter the book id :");
	scanf("%d",&b.id);
	printf("enter the book name :");
	scanf("%s",&b.name);
	printf("enter the book price :");
	scanf("%f",&b.price);
	book *p;
	p=&b;
	printf("\nid :%d\n name :%s\n price:%f\n",b.id,b.name,b.price);
	printf("_________________________\nusing pointer _________________________");
	printf("id :%d\n name :%s\n price:%f\n",p->id,p->name,p->price);
}
