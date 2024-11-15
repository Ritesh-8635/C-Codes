
#include<stdio.h>
int even(int a,int b);

int odd(int a,int b);

int main(){
	
	int n,z,c;
	printf("enter the first  number :\n");
	scanf("%d",&n);
	
	printf("enter the second number :\n");
	scanf("%d",&z);
	
	c=even(n,z);
	printf("the even between two number is  :%d\n",c);
	
	c=odd(n,z);
	printf("the odd between two number is  :%d\n",c);
	
}
int even(int a,int b){
	int evennum;
	if(a%2==0){
		evennum=a;
	}
	else if (b%2==0){
		evennum=b;
	}
	
	return evennum;
		
}

int odd(int a,int b){
	int oddnum;
	if(a%2==1){
		oddnum=a;
	}
	else if (b%2==1){
		oddnum=b;
	}
	return oddnum;
		
}
	
