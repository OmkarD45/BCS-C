#include<stdio.h>
#include<malloc.h>
#include"stackdynamic.h"
void main()
{
	int ch,n,q=0;
	init();
	do
	{
		printf("1.push\n2.pop\n3.peek\n4.exit\n");
		printf("enter your choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter value to push\t");
			scanf("%d",&n);
			push(n);
			break;
			case 2:if(isempty())
			printf("stack is empty\n");
			else
			printf("the pop element is %d\n",pop());
			break;
			case 3:if(isempty())
			printf("stack is empty\n");
			else
			printf("the top element is %d\n",peek());
			break;
			case 4:q=1;
			break;
		}
	}while(q==0);
}
