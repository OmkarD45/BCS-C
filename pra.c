#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;  
	struct node *next, *prev;
};


struct node *create();
struct node *insert(struct node*,int);
struct node *delete(struct node*,int);
void display(struct node *);

//creation of SLL
struct node *create()
{
	struct node *start=NULL,*temp,*newnode;
	int i,n;
	printf("enter the total node\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data\n");
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

//insertion
struct node *insert(struct node *start,int pos)
{
	struct node *temp=start,*newnode;
	int i=1;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->data);
	if(pos==1)
	{
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	return start;
}

//deletion
struct node *delete(struct node *start,int pos)
{
	struct node *temp=start,*p;
	int i=1;
	if(pos==1)
	{
		p=start;
		start=start->next;
		free(p);
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		p=temp->next;
		temp->next=p->next;
		p->next->prev=temp;
		free(p);
	}
	return start;
}

//dislpaying
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
		printf("1.create\n 2.insert\n 3.delete\n 4.display\n 5.exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=create();
			break;
			case 2:printf("enter position\n");
			scanf("%d",&pos);
			start=insert(start,pos);
			break;
			case 3:printf("enter position\n");
			scanf("%d",&pos);
			start=delete(start,pos);
			break;
			case 4:display(start);
			break;
		}
	}while(ch!=5);
}
