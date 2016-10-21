#include<stdio.h>
#include<algorithm>
#include<vector>
#include<set>
#define gc getchar_unlocked()
#define tr(c,it) for(typeof(c.rbegin()) it=c.rbegin();it!=c.rend();it++)
#define mk make_pair
using namespace std;
 
typedef pair<int,int> ii; 
 
int b[1000][1000],c[1000][1000];
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,k,i,j,maxx=0,tmp,cost=0,init=0,pos;
		scanf("%d%d%d",&n,&m,&k);
		int a[n];
		set<ii> s;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&b[i][j]);
			}
			init+=b[i][a[i]-1];
		}
		cost=init;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&c[i][j]);
			}
		}
		
		for(i=0;i<n;i++)
		{
			maxx=b[i][a[i]-1];
			pos=a[i]-1;
			for(j=0;j<m;j++)
			{
				if(j!=(a[i]-1))
				{
					tmp=b[i][j]-c[i][j];     
					if(tmp>maxx)
					{
						maxx=tmp;
						pos=j;
					}
				}
			}
			if(pos!=(a[i]-1))
			s.insert(mk((maxx-b[i][a[i]-1]),i));
		}
		/*
		printf("\n");
		tr(s,it)
		{
			printf("%d  %d\n",it->first,it->second);
		}
		*/
		
		tmp=0;
		tr(s,it)
		{
			//printf("%d\n",it->first);
			if(tmp<k)
			{
				init+=it->first;
				tmp++;
			}
			else
			{
				break;
			}
			//printf("%d\n",init);
		}
		
		if(init>cost)
		printf("%d\n",init);
		else
		printf("%d\n",cost);
	}
return 0;
} 
