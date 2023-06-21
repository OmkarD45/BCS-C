#include<stdio.h>
#include<malloc.h>
#include"singly.h"
void main()
{
	struct node *create();
	struct node *reverse();
	void display ();
	struct node *head=NULL;
	head=(struct node *)malloc(sizeof(struct node));
	head->next=NULL;
	head=create(head);
	printf("\t\tthe original ");
	display(head);
	head=reverse(head);
	printf("\nThe reverse linked list ");
	display(head);
}

struct node *reverse(struct node *head)
{
	struct node *t1=NULL,*t2=NULL,*t3=NULL;
	t1=head->next;
	if(t1==NULL)
	return;
	t2=t1->next;
	if(t2==NULL)
	return;
	t3=t2->next;
	t1->next=NULL;
	while(t3!=NULL)
	{
		t2->next=t1;
		t1=t2;
		t2=t3;
		t3=t3->next;
	}
	t2->next=t1;
	head->next=t2;
	return(head);
}
