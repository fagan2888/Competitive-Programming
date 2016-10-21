#include<iostream>
#define MAXINT 1000000000
using namespace std;

typedef struct e
{
	int start,end;
	int length;
}edges;

void bellman(edges *e,int m,int n)
{
	int d[m],i,j,u,v,len;
	d[0]=0;
	for(i=1;i<m;i++)
	{
		d[i]=MAXINT;
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m;j++)
		{
			u=e[j].start;
			v=e[j].end;
			len=e[j].length;
			if(d[v]>d[u]+len)
			{
				d[v]=d[u]+len;
			}
		}
	}
	
	//check for negative cycle
	
	for(i=0;i<m;i++)
	{
		u=e[i].start;
		v=e[i].end;
		len=e[i].length;
		if(d[v]>d[u]+len)
		{
			cout<<"negative weight cycle present\n";
			return;
		}
	}
	
	cout<<"shortest distances are\n";
	for(i=0;i<n;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int n,m,i;
	cout<<"enter the number of nodes";
	cin>>n;
	cout<<"enter number of edges\n";
	cin>>m;
	edges e[m];
	for(i=0;i<m;i++)
	{
		cin>>e[i].start>>e[i].end>>e[i].length;
	}
	
	bellman(e,m,n);
return 0;
}
