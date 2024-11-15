#include<stdio.h>
int main()
{
	char d[]="hel lio anfoo afnu ngfuo wnuo" ;
	int c=0,i=0,z=0;
	while(d[i]!='\0'){
		if(d[i]!=' ')
			c++;
            i++;
		
	}
	printf("count: %d\n",c);
	printf("count: %d\n",i);
	z=i-c;
	printf("the number of blank spaces is %d\n",z);
}
