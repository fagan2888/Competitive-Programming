#include<iostream>
#include<algorithm>
using namespace std;

int heap[100];
int size=0;

void heapify_down(int p)
{
	int j;
	if(2*p>size)
	{
		return;
	}
	else if(2*p==size)
	{
		j=2*p;
	}
	else
	{
		if(heap[2*p-1]>=heap[2*p])
		{
			j=(2*p+1);
		}
		else
		{
			j=2*p;
		}
	}
	if(heap[p-1]>heap[j-1])
	{
		swap(heap[p-1],heap[j-1]);
		heapify_down(j);
	}
	
}

void heapify_up(int p)
{
	int j,par;
	if(p==1)
	{
		return;
	}
	else
	{
		par=p/2;
		if(heap[par-1]>heap[p-1])
		{
			swap(heap[par-1],heap[p-1]);
			heapify_up(par);
		}
	}
	
	
}

void del(int p)
{
	swap(heap[p-1],heap[size-1]);
	size=size-1;
	heapify_down(p);
}

void ins(int p)
{
	size+=1;
	heap[size-1]=p;
	heapify_up(size);
}

void print()
{
	int j;
	for(j=0;j<size;j++)
	{
		cout<<heap[j]<<" ";
	}
	printf("\n");
}

int main()
{
	int i,n,j,e;
	cout<<"how many numbers\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>heap[i];
	}
	size=n;
	for(i=n/2;i>=1;i--)
	{
		heapify_down(i);
		
	}
	print();
	cout<<"enter the pos of element to be deleted\n";
	cin>>e;
	del(e);
	print();
	cout<<"enter a number to be inserted\n";
	cin>>e;
	ins(e);
	print();
return 0;
}
