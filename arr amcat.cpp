#include<stdio.h>
int main(){
	int arr[1000];
	int i=0;
	int size;
	printf("enterr the size\n");
	scanf("%d",&size);
	printf("enter the numbers\n");
	for(i=1;i<=size;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is: \n");
	for(i=1;i<=size;i++){
		printf("%d\n",arr[i]);
	}
	int temp=0;
		for(i=1;arr[i]>=temp;i++){
				temp=arr[i];
			}
	printf("%d\n",temp);
	int tempp=temp;
	for(i=1;arr[i]<=tempp;i++){
				tempp=arr[i];
			}
	printf("%d\n",tempp);
}
