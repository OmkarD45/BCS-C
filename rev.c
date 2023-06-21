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
	head=create(head);
	head=reverse(head);
	printf("The reverse linked list ");
	display(head);
}

struct node *reverse(struct node *head)
{
	struct node *t1,*t2,*t3;
	t1=NULL;
	t2=head;
	while(t2!=NULL)
	{
		t3=t2->next;
		t2->next=t1;
		t1=t2;
		t2=t3;
	}
	head=t1;
	return(head);
}
