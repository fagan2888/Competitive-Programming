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
vvii G1;//,G2;


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
bool visit[50000];

//vi cop;
vector<int> a(50000);

void dfs(int s,int i)
{
	
	b[s]=true;
	//G2[i].push_back(ii(s,a[s]));
	if(s!=i)
	{
		if(a[s]!=0)
		{
		   G1[i].push_back(ii(s,a[s]));
		   visit[s]=true;
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

int dfs2(int s)
{
	int k=0;
	b[s]=true;
	if(a[s]==1)
	return 1;
	
	tr(G[s],it)
		{
			if(b[*it]==false)
			{
				k=dfs2(*it);
				if(k==1)
				break;
			}
		}
return k;
}



int main()
{
	int n,m,i,x,y,flag=0,count=0;
	long long int f=0,r=0;
	//n=in();m=in();
	memset(visit,false,sizeof(visit));
	scanf("%d%d",&n,&m);
	
	G.resize(n);
	G1.resize(n);
	//G2.resize(n);
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
			printf("%d  ",*it);
		}
		printf("\n");
	}
	*/
	memset(b,false,sizeof(b));
	for(i=0;i<n;i++)
	{
		if(a[i]!=0 && b[i]==false)
		{
			//cop.clear();
			dfs(i,i);
			visit[i]=true;
			f+=((G1[i].size()*(G1[i].size()+1))/2);
			/*if(G1[i].size()>0)
			{
				r+=(G1[i].size()+1);
			}*/
			
		}
	}
	/*
	for(i=0;i<n;i++)
	{
		printf("%d  ",i+1);
		tr(G2[i],it)
		{
			printf("( %d , %d )  ",it->first+1,it->second);
		}
		printf("\n");
	}*/
	int tmp=0;
	for(i=0;i<n;i++)
	{
		count=0;
		flag=0;
		if((G[i].size()>1))
		{
			tr(G[i],it)
			{
				if(visit[*it]==true)
				{
					//printf("%d ",*it+1);
					count++;
					if(count>1)
					break;
				}
			}
			if(count==0)
			{
				tmp=0;
				memset(b,false,sizeof(b));
				b[i]=true;
				tr(G[i],it)
				{
					tmp+=dfs2(*it);
					if(tmp>1)
					{
						flag=1;
						break;
					}
				}
			}
			else if(count==1)
			{
				tmp=1;
				memset(b,false,sizeof(b));
				b[i]=true;
				tr(G[i],it)
				{
					if(a[*it]==0)
					tmp+=dfs2(*it);
					
					if(tmp>1)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(count>1)
		{
			r++;
		}
		if(flag==1)
		{
			r++;
		}
	}
	
	printf("%d %d\n",f,r);
	
	
return 0;
}
