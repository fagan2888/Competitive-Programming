#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

struct node{
	int val;
	struct node *left,*right;
};

struct node * newnode(int n)
{
	struct node *ptr;
	ptr = new node;
	ptr->val = n;
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}

bool check(struct node *root,int & height)
{
	if(root==NULL)
	{
		height=0;
		return true;
	}
	int lheight,rheight;
	if(check(root->left,lheight)==false)
	{
		return false;
	}
	if(check(root->right,rheight)==false)
	{
		return false;
	}
	
	if(abs(lheight-rheight)<=1)
	{
		height=1+max(lheight,rheight);
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	bool result;
	int height;
	node *root;
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->right->right = newnode(5);/*
	root->left->left->left = newnode(6);/*
	root->left->left->right = newnode(7);
	root->left->right->left = newnode(8);
	root->left->right->right = newnode(9);*/
	result = check(root,height);
	if(result)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
return 0;
}
