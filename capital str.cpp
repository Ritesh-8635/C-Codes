#include<stdio.h>

int main(){
	char d[]="ehehjfhHIOHOHGG";
	int i=0;
	int count =0;
	while(d[i]!='\0'){
		if(d[i]>='A' && d[i]<='Z'){
			count=count+1;
		}	
		i++;	
		}
	printf("count :%d",count);
	return 0;
}

