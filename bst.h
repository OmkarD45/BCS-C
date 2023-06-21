struct node 
{
	int info;
	struct node *left,*right;
};

struct node *create(struct node *root)
{
	struct node *p=NULL,*temp=NULL;
	int n,i=0;
	printf("how many values:\n");
	scanf("%d",&n);
	printf("enter actual values:\n");
	for(i=0;i<n;i++)
	{
		p=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&p->info);
		p->left=p->right=NULL;
		if(root==NULL)
		root=p;
		else
		{
			temp=root;
			while(temp!=NULL)
			{
				if(p->info<temp->info)
				{
					if(temp->left==NULL)
					{
						temp->left=p;
						break;
					}
					else
					temp=temp->left;
				}
				else if(p->info>temp->info)
				{
					if(temp->right==NULL)
					{
						temp->right=p;
						break;
					}
					else
					temp=temp->right;
				}
			}
		}
	}
	return (root);
}
struct node *insert(struct node *root)
{
	struct node *p=NULL,*temp=NULL;
	printf("enter actual value to insert:\n");
	p=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&p->info);
	p->left=p->right=NULL;
	if(root==NULL)
		root=p;
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			if(p->info<temp->info)
			{
				if(temp->left==NULL)
				{
					temp->left=p;
					break;
				}
				else
				temp=temp->left;
			}
			else if(p->info>temp->info)
			{
				if(temp->right==NULL)
				{
					temp->right=p;
					break;
				}
				else
				temp=temp->right;
			}
		}
	}
	return (root);
}

int countnodes(struct node *root)
{
	static int c=0;
	struct node *temp=NULL;
	temp=root;
	if(temp!=NULL)
	{
		c++;
		countnodes(temp->left);
		countnodes(temp->right);
	}
	return(c);
}
void inorder(struct node *root)
{
	struct node *temp=NULL;
	temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d",temp->info);
		inorder(temp->right);
	}
}
void preorder(struct node *root)
{
	struct node *temp;
	temp=root;
	if(temp!=NULL)
	{
		printf("%d",temp->info);
		preorder(temp->left);
		preorder(temp->right);
	}
}
void postorder(struct node *root)
{
	struct node *temp;
	temp=root;
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		printf("%d",temp->info);
	}
}
int search(struct node *root,int key)
{
	struct node *temp=NULL;
	temp=root;
	if(temp!=NULL)
	{
		if(key==temp->info)
		return key;
		else if(key<temp->info)
		search(temp->left,key);
		else if(key>temp->info)
		search(temp->right,key);
	}
	else
	return -1;
}
