#include<stdio.h>
int main()
{
	int i,n,track[20],hm=0,head,d,temp,pass,move,size;
	printf("\nEnter the total no of tracks\n");
	scanf("%d",&n);
	printf("\nEnter the actual tracks\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&track[i]);
	}
	printf("\nEnter the head\n");
	scanf("%d",&head);
	printf("Enter the total no of disks");
	scanf("%d",&size);
	printf("Enter the direction (type 0 for left and 1 for right)");
	scanf("%d",&move);
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(track[i]>track[i+1])
			{
				temp=track[i];
				track[i]=track[i+1];
				track[i+1]=temp;
			}
		}	
	}
	int index;
	for(i=0;i<n;i++)
	{
		if(head<track[i])
		{
			index=i;
			break;
		}
	}
	if(move==1)
	{
		for(i=index;i<n;i++)
		{
			hm=hm+abs(track[i]-head);
			head=track[i];
		}	
		hm=hm+abs(size-track[i-1]-1);
		head=size-1;
		for(i=index-1;i>=0;i--)
		{
			hm=hm+abs(track[i]-head);
			head=track[i];
		}
	}
	else
	{	
		for(i=index-1;i>=0;i--)
		{
			hm=hm+abs(track[i]-head);
			head=track[i];
		}
		hm=hm+abs(track[i+1]-0);
		head=0;
		for(i=index;i<n;i++)
		{
			hm=hm+abs(track[i]-head);
			head=track[i];
		}
	}
	printf("\nTotal head Movement= %d\n",hm);
}
