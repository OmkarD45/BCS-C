#include<stdio.h>
#include<malloc.h>
#include"singly.h"
int main()
{
	struct node *create();
	struct node *insert();
	struct node *delet();
	int search();
	void display();
	struct node *head=NULL;
	int q=0,ch,k,key;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	do
	{
		printf("\n1.Create \n2.Insert \n3.Delete \n4.Search \n5.Display \n6.Exit \n Enter your choice\t");
		scanf("%d",&ch);	
		switch(ch)
		{
			case 1:head=create(head);
			display(head);
			break;
			case 2:head=insert(head);
			display(head);
			break;
			case 3:head=delet(head);
			display(head);
			break;
			case 4:printf("enter value to be searched\t");
			scanf("%d",&key);
			k=search(head,key);
			if(k==-1)
			printf("the value is not found");
			else	
			printf("the value is found at pos:\t%d",k);	
			break;
			case 5:display(head);
			break;
			case 6:q=1;
			break;
		}
	}while(q==0);
}
