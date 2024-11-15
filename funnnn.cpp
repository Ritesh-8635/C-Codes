#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int main(){
	
	int n,z,c;
	printf("enter the first  number :\n");
	scanf("%d",&n);
	
	printf("enter the second number :\n");
	scanf("%d",&z);
	
	c=max(n,z);
	printf("the maximum between two number is  :%d\n",c);
	
	c=min(n,z);
	printf("the minimum between two number is  :%d\n",c);
	
}
int max(int a,int b){
	int maximum;
	if(a>b){
		maximum=a;
	}
	else{
		maximum=b;
	}
		return maximum;
		
}
int min(int a,int b){
	int minimum;
	if(a<b){
		minimum=a;
	}
	else{
		minimum=b;
	}
		return minimum;
		
}

