struct node
{
	int info;
	struct node *next;
};
struct node *create(struct node *head)
{
	struct node *p,*temp=NULL;
	int i,n;
	printf("how many values:\t");
	scanf("%d",&n);
	temp=head;
	printf("enter actual values\t");
	for(i=0;i<n;i++)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->info);
		p->next=NULL;
		temp->next=p;
		temp=p;
	}
	return (head);
}

struct node *insert(struct node *head)
{
	struct node *p=NULL,*temp=NULL;
	int x,pos,i;
	printf("enter pos:\t");
	scanf("%d",&pos);
	for(temp=head,i=1;i<=pos-1&&temp!=NULL;i++)
	{
		temp=temp->next;
	}
	if(temp!=NULL)
	{
		printf("enter actual value for insertion:\t");
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->info);
		p->next=NULL;
		p->next=temp->next;
		temp->next=p;
	}
	else
	{
		printf("\npos out of order");
	}
	return head;
}

struct node *delet(struct node *head)
{
	struct node *p=NULL,*temp=NULL;
	int pos,i;
	printf("enter pos\t");
	scanf("%d",&pos);
	for(temp=head,i=1;i<=pos-1&&temp->next!=NULL;i++)
	{
		temp=temp->next;
	}
	if(temp->next!=NULL)
	{
		p=temp->next;
		printf("\n the deleted element is %d",p->info);
		temp->next=p->next;
		free(p);
	}
	else
	{
		printf("\npos out of order");
	}
	return head;
}

int search(struct node *head,int key)
{
	struct node *temp=NULL;
	int pos=1;
	temp=head->next;
	do
	{
		if(temp->info==key)
		return (pos);
		pos++;
		temp=temp->next;
	}while(temp!=NULL);
	return -1;
}

void display(struct node *head)
{
	struct node *temp=NULL;
	temp=head->next;
	printf("values in SLL are:\t");
	do
	{
		printf("%d\t",temp->info);
		temp=temp->next;
	}while(temp!=NULL);
}
