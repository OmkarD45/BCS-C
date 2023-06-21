#include<stdio.h>
void sort(int[],int);
int main()
{
	int a[20],n,i;
	printf("enter array limit\n");
	scanf("%d",&n);
	printf("enter actual elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
}
void sort(int a[],int n)
{
	int temp,pass,i,sc=0,cc=0,stepc=0;
	for(pass=1;pass<n;pass++)
	{
		stepc++;
		for(i=0;i<n-pass;i++)
		{
			cc++;
			if(a[i]>=a[i+1])
		{
			sc++;
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		}
	}
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("swap, comparison & step count is %d\n, %d\n, %d\n",sc,cc,temp);

}
