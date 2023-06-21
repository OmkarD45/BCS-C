#include<stdio.h>
void main()
{
	int n,bt[20],wt[20],tat[20],i,at[20];
	double wtavg,tatavg,wavg,tavg;
	printf("Enter the no of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the process %d Arrival time & brust time Resp.",i+1);
		scanf("%d%d",&at[i],&bt[i]);
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	wavg=(wtavg/n);
	tavg=(tatavg/n);
	printf("Process\tArrival\tBrust\tWait\tTurnAT\n");
	for(i=0;i<n;i++)
	{
		printf("P[%d]\t%d\t%d\t%d\t%d\n",(i+1),at[i],bt[i],wt[i],tat[i]);
	}
	printf("Average wait time=%f",wavg);
	printf("Average TurnAroundTime time=%f",tavg);
}
