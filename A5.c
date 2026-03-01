#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *first=NULL;
int count=0,i;
void create();
void display();
void insert();
void delete();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create 2.dispaly 3.insert 4.delete 5.exit\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:insert();break;
			case 4:delete();break;
			case 5:exit(0);
			default:printf("enter valid number");
		}
		
	}
	return 0;
}
void create()
{
	int d;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory allocation failed!");
		return;
	}
	printf("enter data to insert: ");
	scanf("%d",&d);
	newnode->data=d;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=first=newnode;
	}
	else
	{
		first->next=newnode;
		first=newnode;
	}
	count++;
	printf("node added successfully\n");
}
void delete()
{
	int pos;
	if(head==NULL)
	{
		printf("LIST IS EMPTY\n");
		return;
	}
	struct node *temp=head;
	struct node *prev=NULL;
	printf("enter position to delete 1 to %d",count);
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("deletion is not possible\n");
		return;
	}
	if(pos==1)
	{
		head=head->next;
		free(temp);
	}
	else
	{
		for(i=1;i<pos;i++)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		if(pos==count)
		{
			first=prev;
		}
		free(temp);
	}
	count--;
}
void insert()
{
	int pos,x;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data to insert: ");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	printf("enter position to insert 1 to %d\n",count+1);
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("insertion is not possible!\n");
		free(newnode);
		return;
	}
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		struct node *temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		
	}
	count++;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
