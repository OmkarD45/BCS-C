#define MAX 15
struct stack
{
	int top;
	int a[MAX];	
};
void init(struct stack *s)
{
	s->top=-1;
}
int isempty(struct stack *s)
{
	if(s->top==-1)
	return 1;
	return 0;
}
int isfull(struct stack *s)
{
	return(s->top==MAX-1);
}
int isEmpty(struct stack *s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}
void push(struct stack *s,int num)
{
	s->a[++s->top]=num;
}
int pop(struct stack *s)
{
	int x=s->a[s->top];
	s->top--;
	return x;
}

int peek(struct stack *s)
{
	return(s->a[s->top]);
}
