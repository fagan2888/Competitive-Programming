#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

class bst
{
	struct node
	{
		struct node * left;
		struct node * right;
		int data;
	};
	struct node * root;
	public:
		
		bst()
		{
			root=NULL;
		}
		
		void ins(int n);
		void del(int n);
		void pre(struct node * r);
		void in(struct node * r);
		void post(struct node * r);
		void p_pre();
		void p_in();
		void p_post();
};

void bst::ins(int n)
{
	struct node * neww,*save;
	neww=new struct node;
	neww->data=n;
	neww->left=NULL;
	neww->right=NULL;
	
	if(root==NULL)
	{
		root=neww;
		return;
	}
	else
	{
		struct node *t;
		t=root;
		while(t!=NULL)
		{
			if(n<=t->data)
			{
				save=t;
				t=t->left;
			}
			else
			{
				save=t;
				t=t->right;
			}
		}
	}
	if(save->data>=n)   
	{
		save->left=neww;
	}
	else
	{
		save->right=neww;
	}
	
}

void bst::del(int n)
{
	if(root==NULL)
	{
		cout<<"Tree is empty\n";
	}
	struct node* t,*par;
	t=root;par=NULL;
	/*if(root->data==n && root->left==NULL && root->right!=NULL)
	{
		root=root->right;
		return;
	}*/
	if(root->data==n&& root->left==NULL && root->right==NULL)
	{
		root=NULL;
		return;
	}
	while(t!=NULL && t->data!=n)
	{
		if(n<=t->data)
		{
			par=t;
			t=t->left;
		}
		else
		{
			par=t;
			t=t->right;
		}
	}
	if(t==NULL)
	{
		cout<<"node does not exist\n";
		return;
	}
	// 3cases- 1-no child 2- one child 3- 2 children
	
	if(t->left==NULL && t->right==NULL)
	{
		if(par->left==t)
		par->left=NULL;
		else
		par->right=NULL;
		delete t;
		return;
	}
	else if((t->left!=NULL && t->right==NULL) || (t->left==NULL && t->right!=NULL))
	{
		struct node * child;
		if(t->left !=NULL)
		{
			child=t->left;
		}
		else
		{
			child=t->right;
		}
		
		if(par==NULL)
		{
			root=child;
		}
		else
		{
			if(par->left==t)
			{
				par->left=child;
			}
			else
			{
				par->right=child;
			}
		}
		delete t;
		return;
	}
	else
	{
		struct node *suc,*save,*par,*child;
		save=t;
		par=t;
		t=t->left;
		
		while(t->right!=NULL)
		{
			par=t;
			t=t->right;
		}
		
		if(t->left!=NULL)
		child=t->left;
		else
		child=NULL;
		
		swap(save->data,t->data);
		if(par->left!=NULL)
		{
			if(par->left->data==n)
			par->left=child;
		}
		else
		{
			par->right=child;
		}
		delete t;
		return;
	}
	
	
}


void bst::p_pre()
{
	pre(root);
}

void bst::pre(struct node * r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		cout<<r->data<<" ";
		pre(r->left);
		pre(r->right);
	}
}

void bst::p_in()
{
	in(root);
}

void bst::in(struct node * r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		in(r->left);
		cout<<r->data<<" ";
		in(r->right);
	}
}

void bst::p_post()
{
	post(root);
}

void bst::post(struct node * r)
{
	if(r==NULL)
	{
		return;
	}
	else
	{
		
		post(r->left);
		post(r->right);
		cout<<r->data<<" ";
	}
}

int main()
{
    bst b;
    int ch,tmp,tmp1;
    while(1)
    {
       cout<<endl<<endl;
       cout<<" Binary Search Tree Operations "<<endl;
       cout<<" ----------------------------- "<<endl;
       cout<<" 1. Insertion/Creation "<<endl;
       cout<<" 2. In-Order Traversal "<<endl;
       cout<<" 3. Pre-Order Traversal "<<endl;
       cout<<" 4. Post-Order Traversal "<<endl;
       cout<<" 5. Removal "<<endl;
       cout<<" 6. Exit "<<endl;
       cout<<" Enter your choice : ";
       cin>>ch;
       switch(ch)
       {
           case 1 : cout<<" Enter Number to be inserted : ";
                    cin>>tmp;
                    b.ins(tmp);
                    break;
           case 2 : cout<<endl;
                    cout<<" In-Order Traversal "<<endl;
                    cout<<" -------------------"<<endl;
                    b.p_in();
                    break;
           case 3 : cout<<endl;
                    cout<<" Pre-Order Traversal "<<endl;
                    cout<<" -------------------"<<endl;
                    b.p_pre();
                    break;
           case 4 : cout<<endl;
                    cout<<" Post-Order Traversal "<<endl;
                    cout<<" --------------------"<<endl;
                    b.p_post();
                    break;
           case 5 : cout<<" Enter data to be deleted : ";
                    cin>>tmp1;
                    b.del(tmp1);
                    break;
           case 6 : return 0;
                    break;
       }
    }
}
