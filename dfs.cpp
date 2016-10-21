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
vector<bool> b(MAX,false);

void dfs(int s)
{
	
	b[s]=true;
	cout<<" "<<s+1;
	tr(G[s],it)
		{
			if(b[*it]==false)
			{
				dfs(*it);
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
	
	dfs(0);
	
return 0;
}
