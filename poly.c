#include<stdio.h>
#include<malloc.h>
#include"poly.h"
void main()
{
	struct node *create();
	void display();
	struct node *add();
	struct node *head1=NULL,*head2=NULL,*head3=NULL;
	head1=(struct node *)malloc(sizeof(struct node));
	head1->next=NULL;
	printf("enter elements for first polynomial:\t");
	head1=create(head1);
	printf("elements of first polynomial are:\n");
	printf("coeff  exp\n");
	display(head1);
	head2=(struct node *)malloc(sizeof(struct node));
	head2->next=NULL;
	printf("enter elements for second polynomial:\t");
	head2=create(head2);
	printf("elements of second polynomial are:\n");
	printf("coeff  exp\n");
	display(head2);
	head3=(struct node *)malloc(sizeof(struct node));
	head3->next=NULL;
	head3=add(head1,head2,head3);
	printf("elements of third polynomial are:\n");
	printf("coeff  exp\n");
	display(head3);	
}
