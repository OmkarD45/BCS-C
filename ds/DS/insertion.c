#include<stdio.h>
void main()
{
    int x[10],i,n;
    insertion(int, int);
    printf("how many values");
    scanf("%d",&n);
    printf("enter actual values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    insertion(x,n);
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
}