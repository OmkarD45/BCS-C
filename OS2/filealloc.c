#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 200
typedef struct dir
{
	char fname[20];
	int start;
	struct dir *next;
}NODE;
NODE *first,*last;
int n,fb,bit[MAX];
void init()
{
	int i;
	printf("Enter the total no of disk blocks:");
	scanf("%d",&n);
	fb=n;
	for(i=0;i<n;i++)
	{	
		int k=rand()%n;
		if(bit[k]!=-2)
		{
			bit[k]=-2;
			fb--;
		}
	}
}
void show_bitvector()
{
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",bit[i]);
	printf("\n");
}

void show_dir()
{
	NODE *p;
	int i;	
	printf("File\tChain\n");
	p=first;
	while(p!=NULL)
	{		
		printf("%s\t",p->fname);
		i=p->start;
		while(i!=-1)
		{
			printf("%d->",i);
			i=bit[i];
		}
		printf("NULL\n");
		p=p->next;
	}
}

void create()
{
	NODE *P;
	char fname[20];
	int i,j,nob;
	printf("Enter file name!");	
	scanf("%s",&fname);
	printf("Enter the no of blocks:");
	scanf("%d",&nob);
	if(nob>fb)
	{
		prinf("Failed to create file %s\n",fname);
	}
}


int main()
{
	int ch;
	init();
	while(1)
	{
		printf("\n1.Show bit vector\n");
		printf("2.Create new file\n");
		printf("3.Show Directory\n");
		printf("4.Delete file\n");
		printf("5.Exit\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				show_bitvector();
				break;
			case 2:
				show_dir();
				break;
			case 3:
				create();
				break;
			case 4:
				
				break;
			case 5:
				exit(0);
		}
	}
}




