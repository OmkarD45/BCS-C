#include<stdio.h>
#include<malloc.h>
#include"bst.h"
void main()
{
	struct node *create();
	struct node *insert();
	void inorder();
	void preorder();
	void postorder();
	int countnodes();
	int search();
	struct node *root=NULL;
	int q=0,c=0,ch,key,k;
	do
	{
		printf("\n1.create\t2.insert\t3.count\n4.inorder\t5.preorder\t6.postorder\n7.search\t8.exit");
		printf("\t\tenter your choice\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				root=create(root);
				inorder(root);
			break;
			case 2:
				root=insert(root);
				inorder(root);
			break;
			case 3:
				c=countnodes(root);
				printf("\nthe total no of nodes are %d",c);
			break;
			case 4:inorder(root);
			break;
			case 5:preorder(root);
			break;
			case 6:postorder(root);
			break;
			case 7:printf("\nenter value to search");
			scanf("%d",&key);
			k=search(root,key);
			if(k=-1)
			printf("\nthe value is not found");
			else printf("\nvalue is found at position %d",k);
			break;
			case 8:q=1;
			break;
		}
	}while(q==0);
}
