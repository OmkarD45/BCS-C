#include<stdio.h>
int main()
{
   int a[30],i,n;
   printf("how many numbers \n");
   scanf("%d",&n);
   printf("enter actual numbers\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
  sort(a,n);
  printf("sorted elements are\n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
void sort(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			break;
		}
		a[j+1]=temp;
	}
}
