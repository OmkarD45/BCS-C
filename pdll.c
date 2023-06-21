#include<stdio.h>
struct node
{
	int data;
	struct node *next,*prev;
};

struct node *create();
struct node *insert(struct node *,int);
void display(struct node *);
	
struct node *create()
{
	int i,n;
	struct node *start=NULL, *temp, *newnode;
	printf("enter the total node\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\enter the data\t");
		scanf("%d",&newnode->data);
		if(start==NULL)
		{
			start=temp=newnode;
		}	
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
	}
	return start;
}

struct node *insert(struct node *start,int pos)
{
	struct node *temp=start, *newnode;
	int i=1;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the data\t");
	scanf("%d",&newnode->data);
	if(pos=1)
	{
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
	}
	else
	{
		while(i<=pos-1)
		{
			temp=temp->next;
			i=i+1;
		}
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
	}
	start;
}

void display(struct node *start)
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;	
	}
}

int main()
{
	struct node *start;
	int pos,ch;
	do
	{
		printf("\n 1.create\n 2.insert\n 3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=create();
			break;
			case 2:printf("enter the pos\t");
			scanf("%d",&pos);
			start=insert(start,pos);
			break;
			case 3:display(start);
			break;
		}
	}while(ch!=4);
}























