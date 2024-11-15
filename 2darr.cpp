#include<stdio.h>
int main()
{
	int arr[3][2]={1,3,4,5,7};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<=2;j++){
			printf("%d\t",arr[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
