#include<stdio.h>
void sort(int[],int);
void merge(int[],int[],int,int);
int main ()
{
	int i,j,n,m,a[30],b[30];
	printf("ener the first array limit\n");
	scanf("%d",&n);
	printf("enter the first array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("ener the second array limit\n");
	scanf("%d",&m);
	printf("enter the second array elements\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);	
	}
	sort(a,n);
	sort(b,m);
	merge(a,b,n,m);
}

void sort(int a[],int n)
{
	int i,temp,pass=1;

	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}

void merge(int a[],int b[],int n,int m)
{
int i,j,k=0,c[n+m];
{
while(i<n && j<m)
{
	if(a[i]<b[j])
	{
		c[k]=a[i];
	i++;
	}
	else
	{
		c[k]=b[j];
		j++;
	}
	k++;
}
while(i<n)
{
	c[k]=a[i];
	i++;k++;
}
while(j<m)
{
	c[k]=b[j];
	j++;k++;
}

printf("sorted array is\n");
for(i=0;i<n+m;i++)
{
	printf("%d\n",c[k]);
}
}
}
