#include<stdio.h>
int a=0,b=1,n,c,i;
void main()
{
	printf("Enter Limit :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d ",a);
		c = a+b;
		a=b;
		b=c;
	}	
}
