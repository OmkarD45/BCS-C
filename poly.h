struct node
{
	int coeff,exp;
	struct node *next;
};

struct node *create(struct node *head)
{
	struct node *temp=head,*p=0;
	int i,n;
	printf("\nHow many terms:\t");
	scanf("%d",&n);
	printf("\nenter the terms in descending order of powers:\t");
	for(i=1;i<=n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		p->next=NULL;
		printf("\nenter coefficient:\t");
		scanf("%d",&p->coeff);
		printf("\nenter exponent:\t");
		scanf("%d",&p->exp);
		temp->next=p;
		temp=p;
	}
	return(head);
}

void display(struct node *head)
{
	struct node *temp=NULL;
	temp=head->next;
	do
	{
		printf("\n%d\t%d\n",temp->coeff,temp->exp);
		temp=temp->next;
	}while(temp!=NULL);
}

struct node *add(struct node *p1,struct node *p2,struct node *p3)
{
	struct node *t1=p1->next,*t2=p2->next,*t3=p3,*p=NULL;
	while(t1!=NULL && t2!=NULL)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->next=NULL;
		if(t1->exp>t2->exp)
		{
			p->exp=t1->exp;
			p->coeff=t1->coeff;
			t1=t1->next;
		}
		else if(t1->exp<t2->exp)
		{
			p->exp=t2->exp;
			p->coeff=t2->coeff;
			t2=t2->next;
		}		
		else
		{
			p->exp=t1->exp;
			p->coeff=t1->coeff+t2->coeff;
			t1=t1->next;
			t2=t2->next;
		}
		t3->next=p;
		t3=p;
	}
	if(t1!=NULL)
	t3->next=t1;
	if(t2!=NULL)
	t3->next=t2;
	return(p3);
}



