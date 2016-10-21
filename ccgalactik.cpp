#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;

vvi G(100000);
vi mn,c(100000);
vector<bool> b(100000,false);

void bfs(int s)
{
	queue<int> Q;
	int min=1000000000;
	b[s]=true;
	Q.push(s);
	if((min>c[s]) && c[s]!=-1)
	{
		min=c[s];
	}
	//cout<<" "<<s+1;
	while(!(Q.empty()))
	{
		int f=Q.front();
		Q.pop();
		tr(G[f],it)
		{
			if(b[*it]==false)
			{
				b[*it]=true;
				Q.push(*it);
				if((min>c[*it]) && c[*it]!=-1)
				{
					min=c[*it];
				}
				//cout<<" "<<*it+1;
			}
		}
	}
	mn.push_back(min);
}


int main()
{
	int n,m,i,x,y,count=0,ans=0,flag=0,min=1000000000,f,k=0;
	scanf("%d%d",&n,&m);
	G.resize(n);
	b.resize(n);
	c.resize(n);
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&x,&y);
		G[x-1].push_back(y-1);
		G[y-1].push_back(x-1);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		c[i]=x; 
	}
	
	for(i=0;i<n;i++)
	{
		if(b[i]==false)
		{
			count++;
			bfs(i);
		}
	}
	
	if(count==1)
	{
		printf("0\n");
		return 0;
	}
	else
	{
		tr(mn,it)
		{
			k++;
			if(*it==1000000000)
			{
				flag=1;
				break;
			}
			else
			{
				ans+=*it;
				if(min>*it)
				{
					min=*it;
				}
			}
		}
	}
	
	if(flag==1)
	{
		printf("-1\n");
	}
	else
	{
		f=(min*(k-1)+(ans-min));
		printf("%d\n",f);
	}
	
return 0;
}
