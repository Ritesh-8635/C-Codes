#include<stdio.h>
int search(int l,int r,int target,int a[]){
	int mid=(l+r)/2;
	if(a[mid]==target){
		return mid;
		
	}
	else if(a[mid]<target){
		return search(mid+1,r,target,a);
		
		
	}
	else{
		return search(l,mid-1,target,a);
	}
}

int solve(){
	int a[5]={1,2,3,4,5};
	int result=search(0,4,3,a);
	printf("result is %d\n",result);
}

int main(){
	solve();
}
