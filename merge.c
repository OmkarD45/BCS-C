#include<stdio.h>
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,b[20];
	i=low;
	j=mid+1;
	k=0;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	{
		a[i]=b[k];
	}
}

void main()
{
	int n,i,a[20];
	printf("how many nos\n");
	scanf("%d",&n);
	printf("enter actul elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("sorted elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
	}
}
