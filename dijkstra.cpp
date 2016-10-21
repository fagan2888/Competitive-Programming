#include<stdio.h>
#include<vector>
#include<set>
#include<iostream>
#define MAX 100
#define MAXINT 1000000000
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;



vvii G(MAX);		// Graph in the form of adjacency list with distances
vi D(MAX,MAXINT);	// intialise the distances to infinity

void dijkstra(int s)
{
	set<ii> q;	// set in place of heap.. works the same.. contain only the min distances of other nodes from start vertex
	D[s]=0;
	q.insert(ii(0,s)); 
	while(!(q.empty()))
	{
		ii p=*q.begin();			// extract minimum
		q.erase(q.begin());
		int v,d;
		d=p.first;
		v=p.second;
		tr(G[v],it)				// for modifying the keys
		{
			int v2,d2;
			d2=it->first;
			v2=it->second;
			if (D[v2]>D[v]+d2)
            {
                if (D[v2] != 1000000000)
                {
                    q.erase(q.find(ii(D[v2], v2)));
                }
                D[v2] = D[v] + d2;    
                q.insert(ii(D[v2], v2));
            }
		}
		
	}
	
}


int main()
{
	int n,a,b,w,i,m;
	cout<<"enter number of edges && vertices\n";
	cin>>n>>m;
	for(i=0;i<n;i++)				// creting graph
	{
		cin>>a>>b>>w;
		G[a-1].push_back(ii(b-1,w));				//adjacency list
		G[b-1].push_back(ii(a-1,w));
	}
	
	dijkstra(0);		//call function with starting vertex
	D.resize(m);
	tr(D,it)
	{
		printf("%d ",*it);
	}
return 0;
}
