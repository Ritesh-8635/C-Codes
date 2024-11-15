#include<stdio.h>
int solve(int a,int b){
	int x=a;
	int y=b;
	if(x>y){
		printf("x %d is greater\n",x);
	}
	else if (x==y){
		printf("equal\n");
	}
	else if (x<y){
		printf("x %d is lesser\n",x);
	}
}
int main(){
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	solve(a,b);
}
