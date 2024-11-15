#include<stdio.h>
void solve(int x){
	if(x==0){
		printf("%d\n",x);
		return;
	}
	printf("%d   \n",x);
	solve(x-1);
	printf("%d   \n",x);
}
int main(){
	solve(3);
	return 0;
}
