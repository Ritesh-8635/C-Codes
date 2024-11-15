#include<stdio.h>
#include<string.h>
struct book{
int id;
char name[20];
float price;
};

int main(){
	book b;
	book *p;
	p=&b;
	b.id=111;
	strcpy(b.name,"math");
	b.price=84581.33;
	printf("\nid :%d\n name :%s\n price:%f\n",b.id,b.name,b.price);
	printf("_________________________\nusing pointer _________________________");
	printf("id :%d\n name :%s\n price:%f\n",p->id,p->name,p->price);
}
