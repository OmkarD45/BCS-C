#include<stdio.h>
int main()
{
	int i,n,track[20],hm=0,head;
	printf("\nEnter the total no of tracks\n");
	scanf("%d",&n);
	printf("\nEnter the actual tracks\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&track[i]);
	}
	printf("\nEnter the head\n");
	scanf("%d",&head);
	for(i=0;i<n;i++)
	{
		hm=hm+abs(head-track[i]);
		head=track[i];
	}
	printf("\nTotal head Movement= %d\n",hm);
}
