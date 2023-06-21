struct node
{
	int info;
	struct node *next;	
};
struct node *top;
void init()
{
	top=NULL;
}
int isempty()
{
	return (top==NULL);
}
void push(int x)
{
	struct node *p=NULL;
	p=(struct node*)malloc(sizeof(struct node));
	p->info=x;
	p->next=top;
	top=p;
}
int pop()
{
	struct node *temp=NULL;
	int x;
	temp=top;
	x=temp->info;
	top=top->next;
	free(temp);
	return(x);
}

int peek()
{
	int x;
	x=top->info;
	return(x);
}
