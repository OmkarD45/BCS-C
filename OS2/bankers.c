#include<stdio.h>
void main()
{
   int p,q,i,j,k,count=0,y,w;
   int all[10][10],max[10][10],need[10][10],ava[10],safe[10],work[10],safeseq[20],finish[15],req[10];
   printf("Enter the no of processes and no of resources respectively\n");
   scanf("%d%d",&p,&q);
   printf("Enter the allocation matrix\n");
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
          scanf("%d",&all[i][j]);
      }
   }
   printf("Enter the maximum matrix\n");
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
          scanf("%d",&max[i][j]);
      }
   }
   printf("Enter the available\n");
   for(i=0;i<q;i++)
   {
      scanf("%d",&ava[i]);
   }
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
          need[i][j]=max[i][j]-all[i][j];
      }
   }
   for(i=0;i<q;i++)
   {
      work[i]=ava[i];
   }
   printf("Need Matrix is:\n");
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
          printf("%d\t",need[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<p;i++)
   {
      finish[i]=0;
   }
   for(k=0;k<p;k++) 
   {
      for(i=0;i<p;i++)
      {
         if(finish[i]==0)
         {
            int flag=0;
            for(j=0;j<q;j++)
            {
                if(need[i][j]>work[j])
	      		{
					flag=1;
					break;
                }
            }
			if(flag==0)
	  		{
        	  safeseq[count++]=i;
	  		  for(y=0;y<q;y++)
        	    work[y]=work[y]+all[i][y];
        	  finish[i]=1;
	    	}
         }
      }
   }
   printf("\nsafe seq is:   ");
   for(i=0;i<p;i++)
   {
      printf("P%d==>",safeseq[i]);
   }
   printf("\n");
   printf ("Enter the process no for request:");
   scanf("%d",&w);
   printf("\nEnter the request for checking granted or not:");
   for(i=0;i<q;i++)
   {
      scanf("%d",&req[i]);
   }   
   int v=0;
   for(i=0;i<q;i++)
   {
      if(req[i]>need[w][i])
      {
         v=1; break;
      }
   }
   if(v==1)
   {
      printf("\nprocess cannot granted for given request");
   }
   else
   { 
   		v=0;
      for(i=0;i<q;i++)
   	   {
      		if(req[i]>ava[i])
      		{
      		    v=1; break;
      		}
   	   }
   	   if(v==1)
   	   {
   	   		printf("\nprocess cannot granted for given request");
	   }
	   else
	   {
	   		for(i=0;i<q;i++)
	   		{
	   			ava[i]=ava[i]-req[i];
	   			all[w][i]=all[w][i]+req[i];
	   			need[w][i]=need[w][i]-req[i];
			}
	   }
	   printf("Need Matrix is:\n");
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
          printf("%d\t",need[i][j]);
      }
      printf("\n");
   }
   for(i=0;i<p;i++)
   {
      finish[i]=0;
   }
   for(k=0;k<p;k++) 
   {
      for(i=0;i<p;i++)
      {
         if(finish[i]==0)
         {
            int flag=0;
            for(j=0;j<q;j++)
            {
                if(need[i][j]>work[j])
	      		{
					flag=1;
					break;
                }
            }
			if(flag==0)
	  		{
        	  safeseq[count++]=i;
	  		  for(y=0;y<q;y++)
        	    work[y]=work[y]+all[i][y];
        	  finish[i]=1;
	    	}
         }
      }
   }
   printf("\nsafe seq is:   ");
   for(i=0;i<p;i++)
   {
      printf("P%d==>",safeseq[i]);
   }
   }
}
