#include<stdio.h>
#include"stackstatic.h"
int main()
{
	struct stack s;
	init(&s);
	char str[20],i,j,str2[20];
	printf("enter the string:\t");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		push(&s,str[i]);
	}
	j=0;
	while(!isEmpty(&s))
	{
		str2[j]=pop(&s);
		j++;
	}
	str2[j]='\0';
	printf("reverse string is:      %s",str2);
}
