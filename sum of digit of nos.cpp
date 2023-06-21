#include<stdio.h>
int main()
{
  int sum=0,n;
  printf("enter the no\n");
  scanf("%d",&n);
  while(n>0)
  {
  	sum=sum+n%10;
  	n=n/10;
  }
  printf("the sum of digits of no is %d",sum);

}
