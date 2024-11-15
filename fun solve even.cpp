#include<stdio.h>
int solve(){
	int arr[5]={1,2,3,4,5};
	int sum=0;
	for(int i=0;i<5;i++){
		if(i%2==0){
			sum=arr[i]+sum;
		}
		else{
			sum=arr[i]-sum;
		}
	}
	printf("%d\n",sum);
}
int main(){
	solve();
}
