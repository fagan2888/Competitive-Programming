#include<iostream>
using namespace std;

int k=45;
struct node
{
	struct node * left;
	struct node * right;
	int data;
};

void print(struct node *root)
{
    if (root != NULL)
    {
        print(root->left);
        printf("%d ",root->data);
        print(root->right);
    }
}


void preorder(struct node * root,int sum,struct node *par)
{
	if(root==NULL)
	return;
	
	sum+=root->data;
	if(root->left==NULL && root->right==NULL)
	{
		if(sum<k)
		{
			if(root==par->left)
			{
				par->left=NULL;
			}
			else
			{
				par->right=NULL;
			}
			delete root;
			return;
		}
	}
	
	preorder(root->left,sum,root);
	preorder(root->right,sum,root);
	
	
}


struct node * newNode(int n)
{
	struct node * ptr;
	ptr=new node;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->data=n;
	return ptr;
}


int main()
{
    int k = 45;
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);
 
    printf("Tree before truncation\n");
    print(root);
 
    root = prune(root, k); // k is 45
 
    printf("\n\nTree after truncation\n");
    print(root);
 
    return 0;
}
