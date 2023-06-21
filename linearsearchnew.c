#include<stdio.h>
void main()
{
	int a[30],i,n,key,pos;
	printf("how many values\n");
	scanf("%d",&n);
	printf("enter actual values\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	lin(a,n,key);
}
int lin(int a[],int n,int key)
{
	int flag=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("element is found at %d position",i);
	}
	else
	{
		printf("element is not found");
		n=i;
		a[i]=key;
	}
	printf("new array elements are\n");
	for (i=0;i<=n;i++)
	{
		print("%d",&a[i]);
	}
}	
