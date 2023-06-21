#include<stdio.h>
#include<math.h>
int n,i=0,temp,j,sum=0,t1;
int main()
{
	printf("Enter No:");
	scanf("%d",&n);
	temp = n;
	j=n;
	
	while(temp>0)
	{
		temp=temp/10; 
		i=i+1; 
	}
	
	while(n>0)
	{
		t1=n%10;
		t1=pow(t1,i);
		sum=sum+t1; 
		n=n/10; 
	}
	
	if(sum==j)
	{
		printf("%d is armstrong",j);
	}
	else
	{
			printf("%d is not armstrong",j);
	}
	return 0;
}
