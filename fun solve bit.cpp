#include<stdio.h>
void solve(){
	int x=2;
	int y=x>>1;
	int z=x<<1;
	int result=y+z;
	printf("%d\n",result);
}
int main(){
	solve();
}
