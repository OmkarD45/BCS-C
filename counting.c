#include<stdio.h>

	count(int a[],int n, int k)
	{
		int count[k+1],b[n];
		for(i=0;i<n;i++)
		{
			++count[a[i]];
		}
		for(i=1;i<=k;i++)
		{
			count[i]=count[i]+count[i-1];
		}
		for(i=n-1;i>=0;i--)
		{
			b[--count[a[i]]]=a[i];
		}
		for(i=0;i<n;i++)
		{
			a[i]=b[i];
		}
	}
	void main()
	{
		int a[10],i,n,k;
		printf("how many values\n");
		scanf("%d",&n);
		printf("enter actual values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i])
		}
	}
