#include<stdio.h>

int solve(){
	int n=24;
	int i=0;
	int r=100;
	int ans=n;
	int mid;
	while(i<=r){
		mid=(i+r)/2;
		printf("%d is mid\n",mid);
	
	if(mid*mid<=n){
		ans=mid;
		printf("%d is ans\n",ans);
		i=mid+1;
		printf("%d is i\n",i);
	}
	else{
		r=mid-1;
		printf("%d is r\n",r);
	}
	
}
printf("%d\n",ans);
}

int main(){
	solve();
}
