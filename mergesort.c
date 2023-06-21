#include<stdio.h>
int mergesort();
int merge();
int main()
{
	int a[40],n,i,b[40];
	printf("enter array limit\n");
	scanf("%d",&n);
	printf("enter actual elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	
		printf("%d\n",b[i]);
		return 0;
	
}
int mergesort(int a[], int first, int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}
int merge(int a[],int first,int mid,int last)
{
	int b[50];
	int i,j,k;
	i=first;
	j=mid+1;
	k=first;
	while(i<=mid&&j<=last)
	{
		if(a[i]<=b[j])
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
	if(i>mid)
	{
	while(j<=last)
     {
		b[k]=a[j];
		j++;
		k++;
	 }
   }
   else
   {
	while(i<=mid)
   		{
			b[k]=a[i];
			i++;
			k++;
		}	
	}
}
