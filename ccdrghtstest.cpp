#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define gc getchar_unlocked()
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vi> vvi;
typedef int LL;
vvi G;
vvii G1;
 
 
 /*
LL in()
{
  char c;LL t=0;
  int negative=1;
  c=gc;
  
  while((c<48||c>57)&&c!='-')c=gc;
  if(c=='-')
  {negative=-1;c=gc;}
  while(c>=48&&c<=57)
  {t=(t<<3)+(t<<1)+c-'0';c=gc;}
  return t*negative;
}
 */
 
bool b[50000];
vi cop;
vector<int> a(50000);
 
void dfs(int s,int i)
{
	
	b[s]=true;
	if(s!=i)
	{
		if(a[s]!=0)
		{
		   G1[i].push_back(ii(s,a[s]));
		   G1[s].push_back(ii(i,a[i]));
		   cop.push_back(s);
		}
	}
	tr(G[s],it)
		{
			if(b[*it]==false)
			{
				dfs(*it,i);
			}
		}
}
 
 
int main()
{
	int n,m,i,x,y,f=0,r=0,flag=0,count=0;
	//n=in();m=in();
	scanf("%d%d",&n,&m);
	bool visit[n];
	memset(visit,false,sizeof(visit));
	G.resize(n);
	G1.resize(n);
	a.resize(n);
	for(i=0;i<n;i++)
	{
		//a[i]=in();
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		//x=in();y=in();
		scanf("%d%d",&x,&y);
		G[x-1].push_back(y-1);
		G[y-1].push_back(x-1);
	}
	/*
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",i+1);
		tr(G[i],it)
		{
			printf("%d  ",*it+1);
		}
		printf("\n");
	}
	*/
	memset(b,false,sizeof(b));
	for(i=0;i<n;i++)
	{
		if(a[i]!=0 && b[i]==false)
		{
			cop.clear();
			dfs(i,i);
			tr(cop,it)
			{
				tr(cop,it2)
				{
					if(*it2!=*it)
					{
						G1[*it].push_back(ii(*it2,a[*it2]));
					}
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",i+1);
		tr(G1[i],it)
		{
			printf("( %d , %d )  ",it->first+1,it->second);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			visit[i]=true;
			flag=0;
			tr(G1[i],it)
			{
				if(it->second==1 && visit[it->first]==false)
				{
					f++;
				}
				if(it->second==1)
				{
					flag=1;
				}
			}
			r+=flag;
		}
	}
	
	for(i=0;i<n;i++)
	{
		count=0;
		if(visit[i]==false)
		{
			tr(G[i],it)
			{
				if(visit[*it]==true)
				{
					count++;
				}
			}
		}
		if(count>1)
		{
			r++;
		}
	}
	
	printf("%d %d\n",f,r);
	
	
return 0;
} 
