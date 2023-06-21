#include<stdio.h>
int main()
{
	int a[40],n,i;
	printf("enter array limit\n");
	scanf("%d",&n);
	printf("enter actual elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	
		printf("%d\n",a[i]);
}
void quicksort(int a[], int lb, int ub)
{
	int j;
	if(lb<ub)
	{
		j=partition(a,lb,ub);
		quicksort(a,lb,j-1);
		quicksort(a,j+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int i,j,pivot,temp;
	i=lb+1;
	j=ub;
	pivot=a[lb];
	do
	{
		while((a[i]<=pivot)&&i<=ub)
		i++;
		while((a[j]>pivot)&&(j>lb))
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
	}while(i<j);
	a[lb]=a[j];
	a[j]=pivot;
	return j;
}
