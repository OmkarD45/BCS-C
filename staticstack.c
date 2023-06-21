#include<stdio.h>
#include"stackstatic.h"
void main()
{
	struct stack s;
	int ch,num,q=0;
	init(&s);
	do
	{
		printf("1.push\n2.pop\n3.peek\n4.exit");
		printf("\nenter your choice\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(isfull(&s))
			printf("stack overflow\n");
			else
			{
				printf("enter the no to push:\t");
				scanf("%d",&num);
				push(&s,num);
			}
			break;
			case 2:if(isempty(&s))
			printf("stack underflow\n");
			else
			printf("the deleted element is:  %d\n",pop(&s));
			break;
			case 3:printf("the top element is: %d\n",peek(&s));
			break;
			case 4:q=1;
			break;	
		}
	}while(q==0);
}
