#include<stdio.h>
int main()
{
	int count=0,i,n,track[20],hm=0,head,temp;
	printf("\nEnter the total no of tracks\n");
	scanf("%d",&n);
	printf("\nEnter the actual tracks\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&track[i]);
	}
	printf("\nEnter the head\n");
	scanf("%d",&head);
	while(count!=n)
	{
		int min=1000,index,d;
		for(i=0;i<n;i++)
		{
			d=abs(track[i]-head);
			if(min>d)		
			{
				min=d;
				index=i;
			}
		}
		hm=hm+min;
		head=track[index];
		track[index]=1000;
		count++;
	}
	printf("\nTotal head Movement= %d\n",hm);
}
