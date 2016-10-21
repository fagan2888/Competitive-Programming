#include<stdio.h>
using namespace std; 
struct node{
	int val;
	struct node *link;
};

struct node * newnode(int n)
{
	struct node *ptr;
	ptr = new node;
	ptr->val = n;
	ptr->link = NULL;
	return ptr;
}

struct node * addnmodify(struct node * head)
{
	struct node *ptr=head,*save,*modify=head,*prev;
	int sum=0,flag=0;
	while(ptr!=NULL)
	{
		if(ptr->val!=0)
		{
			sum+=ptr->val;
			ptr = ptr->link;
		}
		else
		{
			modify->val=sum;
			save=modify;
			modify= modify->link;
			sum=0;
			ptr=ptr->link;
		}
	}
	save->link=NULL;
	return head;
}

int main()
{
	int num_nodes=10,n;
	struct node * newn,*head,*last;
	for(int i=0;i<num_nodes;i++)
	{
		scanf("%d",&n);
		newn=newnode(n);
		if(i==0)
		{
			head=newn;
			last=newn;
		}
		else
		{
			last->link=newn;
			last=newn;
		}
	}
	
	head = addnmodify(head);
	while(head!=NULL)
	{
		printf("%d->",head->val);
		head=head->link;
	}
	
return 0;
}
