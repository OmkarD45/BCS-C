#include<stdio.h>
void main()
{
	int a[30],i,n,key;
	printf("how many values\n");
	scanf("%d",&n);
	printf("enter actual values\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	binary(a,n,key);
}
void bubble(int a[],int n)
{
	int temp,pass,i;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>=a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
int binary(int a[],int n,int key)
{
	bubble1(a,n);
	{
		int flag=0,mid,top,bottom;
		top=0;
		bottom=n-1;
		while(top<bottom)
		{
			mid=(top+bottom)/2;
			if(a[mid]==key)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("element is found ");
		}
		else
		{
			printf("element is not found");
		}
	}
}	
