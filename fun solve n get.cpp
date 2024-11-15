#include<stdio.h>
int get(int n){

if(n<=1){
	return n;
	return get(n-1)+get(n-2);
}
}
int solve(){
	int ans=get(6);
	printf("%d\n",ans);
}
int main(){
	solve();
}
