#include<stdio.h>
int main()
{
	int arr[1000];
	int size;
	int i=0;
	int new_element;
	int position;
	
	
	printf("enter the size of array you want :\n");
	scanf("%d",&size);
	
	if(size==0){
		printf("the entered size is not valid");
	}
	for(i=0;i<size;i++){
		printf("enter the %d elements:\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("the first array is : \n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
		}
	
	printf("enter the element you want to enter : \n");
	scanf("%d",&new_element);
	
	printf("enter the new element position : \n");
	scanf("%d",&position);
	
	if(position<0||position>size){
		printf("the posiyion is invalid\n");
	}
	
	for(i=0;)
}

