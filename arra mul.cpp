

#include<stdio.h>
int main()
{
	int arr1[2][2]={2,2,34,42};
	int arr2[2][2]={54,5,48,64};
	int arr3[2][2];
	int i,j,k;
	printf("enter the array elements");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			arr3[i][j]=0;
			for(k=0;k<2;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("\n-------------arr1----------------\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr1[i][j]);
			}
			printf("\n");
		}
		printf("\n-------------arr2----------------\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr2[i][j]);
			}
			printf("\n");
		}
		printf("\n-------------arr3----------------\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr3[i][j]);
			}
			printf("\n");
	return 0;
}
}
