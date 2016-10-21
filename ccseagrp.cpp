#include<stdio.h>
#include<algorithm>
#include<vector>
#include<set>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define all(c) c.begin(),c.end()
using namespace std;

vector< set<int> > G(100);
vector<int> siz(100,0);

void dfs(int i,int n)
{
	int tmp,j;
	tr(G[i],it) 
	{
		printf("%d \n",i);
		for(j=0;j<n;j++)
		{
			printf("%d  ",j+1);
			tr(G[j],it2)
			{
				printf("%d ",*it2+1);
			}
			printf("\n");
		}
		printf("\n");
		if(G[*it].size()!=1 && G[i].size()!=1)
		{
			tmp=*it;
			typeof(G[i].begin()) it2=it;
			it++;
			G[i].erase(it2);
			G[tmp].erase(find(all(G[tmp]),i));
			siz[i]--;
			siz[tmp]--;
			dfs(tmp,n);
		}
		
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,x,y,i,j,maxx=0,pos,flag=0;
		scanf("%d%d",&n,&m);
		G.clear();
		G.resize(n);
		siz.clear();
		siz.resize(n);
				
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&x,&y);
			G[x-1].insert(y-1);
			G[y-1].insert(x-1);
		}
		
		for(i=0;i<n;i++)
		{
			//printf("%d\n",G[i].size());
			siz[i]=G[i].size();
			if(maxx<G[i].size())
			{
				maxx=G[i].size();
				pos=i;
			}
		}
		//printf("%d %d\n",maxx,pos);
		//while(maxx>=1)
		//{
			dfs(pos,n);
			/*for(i=0;i<n;i++)
			{
				siz[i]=G[i].size();
				if(maxx<G[i].size())
				{
					maxx=G[i].size();
					pos=i;
				}
			}
		}*/
		printf("hello\n");
		for(i=0;i<n;i++)
		{
			printf("%d  ",i+1);
			tr(G[i],it)
			{
				printf("%d ",*it+1);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			if(siz[i]!=1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
return 0;
}
