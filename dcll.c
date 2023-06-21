#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next,*prev;
};
struct node *create();
struct node *insert(struct node *,int);
struct node *delet(struct node *,int);
void display(struct node *);

struct node *create()
{
	struct node *start=NULL,*temp,*newnode;
	int i,n;
	printf("enter the total node");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data");
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

struct node *insert(struct node *start, int pos)
{
	struct node *temp=start,*newnode;
	int i=1;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	do
	{
		c++;
		temp=temp->next;
	}while(temp!=start);
	if(pos==1)
	{
		temp=start;
		do
		{
			temp=temp->next;	
		}while(temp->next!=start);
		newnode->next=start;
		start->prev=newnode;
		start=newnode;
		temp->next=start;
		start->prev=temp;
	}
	else 
	{
		i=1;	
		if(pos>c)
		{
			temp=start;
			do
			{
				temp=temp->next;
	    	}while(temp->next!=start);
	    	temp->next=newnode;
	    	newnode->prev=temp;
	    	temp=newnode;
	    	temp->next=start;
			start->prev=temp;
		}
		else
		{
			i=1;
			temp=start;
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
	}
	return start;	
}
 
 struct node *delet(struct node *start, int pos)
{
	struct node *temp=start, *p;
	int i,c=0;
	do
	{
		c++;
		temp=temp->next;
	}while(temp!=start);
	if(pos==1)
	{
		temp=start;
		do
		{
			temp=temp->next;	
		}while(temp->next!=start);
		p=start;
		start=start->next;
		temp->next=start;
		start->prev=temp;
		free(p);
	}
	else 
	{
		i=1;	
		if(pos==c)
		{
			temp=start;
			do
			{
				temp=temp->next;
	    	}while(temp->next->next!=start);
	    	p=temp->next;
			temp->next=start;
			start->prev=temp;
			free(p);
		}
		else
		{
			i=1;
			temp=start;
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
	}
	return start;	
}

 
void display (struct node *start)
{
	struct node *temp=start;
	do
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}while(temp!=start);
}

int main()	
{
	struct node *start;
	int pos,ch;
	do
	{
		printf("1.create\n2.insert\n3.delete\n4.display\n5.exit");
		printf("enter your choise");
		scanf("%d",&ch);
		switch(ch)
		{
			case1:start=create();
			break;
			case2:printf("enter the pos");
			scanf("%d",&pos);
			start=insert(start,pos);
			break;
			case3:printf("enter the pos");
			scanf("%d",&pos);
			start=delet(start,pos);
			break;
			case4:display(start);
			break;
		}
	}while(ch!=5);
}

