void postfix(char in[],char post[])
{
	int i,j=0;
	char ch1;
	struct stack s;
	init(&s);
	for(i=0;in[i]!='\0';i++1])
	{
		if(in[i]=='('||in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/'||in[i]=='^')
		push(&s,in[i]);
		else if(in[i]==')')
		{
			while((ch1=pop(&s))='('&&(!isempty(&s)))
			{
				post[j]=ch1;
				j++;
			}
		}
		else 
		post[j++]=in[i];
	}
	while(!isempty(&s))
	{
		post[j]=pop(&s);
		j++
	}
	post[j]='\0';
}
void evaluate(char post[])
{
	int i,val,opnd1,opnd2;
	struct stack s;
	init stack(&s);
	for(i=0;post[i]!='\0';i++)
	{
		if(isalpha(post[i]))
		{
			printf("\n enter the value for %c",post[i]);
			scanf("%d",&val);
			push(&s,val);
		}
		else
		{
			opnd2=pop(&s);
			opnd1=pop(&s);
			
		}
	}
}
