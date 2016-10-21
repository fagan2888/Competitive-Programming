#include<iostream>
#include<vector>
#include<set>
#define MAX 100
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

vvii G(MAX);

int prims(int n)
{
	int total=0,save;
	set<int> x;
	set<ii> min;
	x.insert(0);
	save=x.size();
	tr(G[0],it)
	{
		min.insert(*it);
	}
	while(x.size()!=n)
	{
		ii tmp;
		int v,d;
		tmp=*(min.begin());
		min.erase(min.begin());
		d=tmp.first;
		v=tmp.second;
		
		x.insert(v);
		if(x.size()==save)
		{
			continue;
		}
		else
		{
			save=x.size();
			total+=d;
			tr(G[v],it)
			{
				min.insert(*it);
			}
		}
	}
	return total;
}


int main()
{
	int m,i,a,b,w,ans,n;
	cout<<"enter the number of edges and nodes\n";
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>w;
		G[a-1].push_back(ii(w,b-1));
		G[b-1].push_back(ii(w,a-1));		
	}
	
	ans=prims(n);
	printf("%d\n",ans);
	return 0;
	
}




