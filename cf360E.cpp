#include<iostream>
#include<stdio.h>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#define MAX 10000
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef set<iii> siii;

vector<siii> G(MAX);
int mat[100]={0};
map<pair<int,int>,int > ans;
vector<ii> print;
int main()
{
	int n,m,k,s1,s2,f,i,j,a,b,c,l,r,tmp,tmp2;
	scanf("%d%d%d",&n,&m,&k);
	scanf("%d%d%d",&s1,&s2,&f);
	
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		G[a-1].insert(iii(ii(c,0),b-1));
		
		/*for(j=0;j<n;j++)
	{
		cout<<j+1<<"  ";
		tr(G[j],it)
		{
			cout<<"( "<<it->first.first<<","<<it->first.second<<","<<it->second+1<<" ) ";
		
		}
		cout<<"\n";
	}*/
	}
	
	for(i=0;i<k;i++)
	{
		scanf("%d%d%d%d",&a,&b,&l,&r);
		G[a-1].insert(iii(ii(l,r),b-1));
		print.push_back(ii(a-1,b-1));
		mat[i]=r;        
		ans[ii(a-1,b-1)]=i;
		/*for(j=0;j<n;j++)
	{
		cout<<j+1<<"  ";
		tr(G[j],it)
		{
			cout<<"( "<<it->first.first<<","<<it->first.second<<","<<it->second+1<<" ) ";
		
		}
		cout<<"\n";
	}*/
	}
	
	/*for(j=0;j<n;j++)
	{
		cout<<j+1<<"  ";
		tr(G[j],it)
		{
			cout<<"( "<<it->first.first<<","<<it->first.second<<","<<it->second+1<<" ) ";
		
		}
		cout<<"\n";
	}*/
	
	long long int p1=0,p2=0;
	int s=s1-1;
	f=f-1;
	while(s!=f)
	{
		//cout<<"hello\n";
		typeof(G[s].begin()) it=G[s].begin();
		p1+=it->first.first;
		tmp=it->second;
		if(it->first.second!=0)
		{
			tmp2=it->first.first;
			//ans.push_back(it->first.first);
			G[s].erase(it);
			G[s].insert(iii(ii(tmp2,0),tmp));
			mat[ans[ii(s,tmp)]]=tmp2;
		}
		s=tmp;
	}
	//cout<<"hello1\n";
	s=s2-1;
	while(s!=f)
	{
		typeof(G[s].begin()) it=G[s].begin();
		
		if(it->first.second!=0)
		{
			p2+=it->first.second;
			//ans.push_back(it->first.second);
			s=it->second;
		}
		else
		{
			p2+=it->first.first;
			s=it->second;
		}
	}
	
	if(p1<p2)
	{
		printf("WIN\n");
		for(i=0;i<k;i++)
		{
			printf("%d ",mat[i]);
		}
		/*tr(print,it)
		{
			printf("%d ",mat[it->first][it->second]);
		}*/
		printf("\n");
	}
	else if(p1==p2)
	{
		printf("DRAW\n");
		for(i=0;i<k;i++)
		{
			printf("%d ",mat[i]);
		}
		/*tr(print,it)
		{
			printf("%d ",mat[it->first][it->second]);   
		}*/
		printf("\n");
	}
	else
	{
		printf("LOSE\n");
	}
	
return 0;
}
