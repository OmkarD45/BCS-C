#include<stdio.h>
void merge1(int[],int,int,int)
void mergesort(int[],int,int);
int main();
{
	int a[20],n,i;
	printf("enter array limit\n");
	scanf("%d",&n);
	printf("enter actual elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,low,high);
	printf("the sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1;high);
		mergesort(a,low,mid,high);
	}
}
merge1(int a[],int low,int mid,int high)
{
	int i,j,k,b[20];
	i=low;
	j=mid+1;
	k=0;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<b[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
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
