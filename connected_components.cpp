#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#include<queue>
#define MAX 100
#define MAXINT 1000000000
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vi> vvi;

vvi G(MAX);
vector<bool> v(MAX,false);

void bfs(int s)
{
	queue<int> Q;
	v[s]=true;
	Q.push(s);
	cout<<" "<<s+1;
	while(!(Q.empty()))
	{
		int f=Q.front();
		Q.pop();
		tr(G[f],it)
		{
			if(v[*it]==false)
			{
				v[*it]=true;
				Q.push(*it);
				cout<<" "<<*it+1;
			}
		}
	}
}

int main()
{
	int n,i,a,b,m;
	cout<<"enter the number of edges\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		G[a-1].push_back(b-1);
		G[b-1].push_back(a-1);
	}
	
	cout<<"connected components are\n";
	for(i=0;i<n;i++)
	{
		if(v[i]==false)
		{
			bfs(i);
		}
		cout<<"\n";
	}
	
return 0;
}
