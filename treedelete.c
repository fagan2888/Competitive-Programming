#include<stdio.h> 
struct node{
	int val;
	struct node *left,*right;
};

struct node * newnode(int n)
{
	struct node *ptr;
	ptr = new node;
	ptr->val = n;
	ptr->left = NULL
	ptr->right = NULL;
	return ptr;
}

void deletefromtree(struct node **root,int n)
{
	if(*root==NULL)
	{
		return;
	}
	else
	{
		deletefromtree(&((*root)->left));
		deletefromtree(&((*root)->right));
		if((*root)->left==NULL && (*root)->right==NULL)
		{
			if((*root)->val==n)
			{
				delete *root;
			}
		}
	}
}

int main()
{
	int num_nodes=10,val=5;
	node *root;
	root = newnode(6);
	root->left = newnode(5);
	root->right = newnode(10);
	root->left->left = newnode(5);
	root->left->right = newnode(5);
	root->left->left->left = newnode(5);
	root->left->left->right = newnode(5);
	root->left->right->left = newnode(6);
	root->left->right->right = newnode(5);
	
	deletefromtree(&root,5);
	
	
return 0;
}
