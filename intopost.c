#include<stdio.h>
#include"stackstatic.h"
int isalpha(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'));
	return 1;
	return 0;
}
void postfix(char in[],char post[])
{
	int i,j=0;
	char ch1;
	struct stack s;
	init(&s);
	for(i=0;in[i]!='\0';i++)
	{
		if(in[i]=='('||in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/'||in[i]=='^')
		{
			push(&s,in[i]);
		}
		else if(in[i]==')')
		{
			while(ch1==pop(&s)!=')'&&(!isempty(&s)))
			{
				post[j++]=ch1;
			}
		}
		else
		{
			post[j++]=in[i];
		}
		while(!isempty(&s))
		{
			post[j++]=pop(&s);
		}
		post[j]='\0';
	}
}
void evaluate(char post[])
{
	int i,val,opnd1,opnd2;
	struct stack s;
	init(&s);
	for(i=0;post[i]!='\0';i++)
	{
		if(isalpha(post[i]))
		{
			printf("\n enter the value for %c",post[i]);
			scanf("%d",&val);
			push(&s,val);
			isalpha(post[i]);
		}
		else
		{
			opnd2=pop(&s);
			opnd1=pop(&s);
			if(post[i]=='+')
			push(&s,opnd1+opnd2);
			else if(post[i]=='-')
			push(&s,opnd1-opnd2);
			else if(post[i]=='*')
			push(&s,opnd1*opnd2);
			else if(post[i]=='/')
			push(&s,opnd1/opnd2);
			else 
			push(&s,opnd1^opnd2);
		}
	}
	printf("the result is %d",pop(&s));
}

void main()
{
	char in[20],ch,post[20];
	void postfix();
	void evaluate();
	printf("enter the infix expression");
	scanf("%s",in);
	postfix(in,post);
	printf("postfix expression is:\t %s",post);
	evaluate(post);
}
