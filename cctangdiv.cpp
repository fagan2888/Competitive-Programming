#include<stdio.h>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
typedef pair<int,int> ii;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,p,i;
		scanf("%d%d%d",&n,&k,&p);
		map<int,int> start,end;
		vector<ii> vp(p);
		int a,b;
		for(i=0;i<k;i++)
		{
			scanf("%d%d",&a,&b);
			start[a]=1;
			end[b]=1; 
		}
		for(i=0;i<p;i++)
		{
			scanf("%d%d",&a,&b);
			vp[i]=ii(a,b);
		}
		if(p>k)
		{
			printf("No\n");
			continue;
		}
		else
		{
			int flag=0;
			tr(vp,it)
			{
				if(start[it->first]==0 || end[it->second]==0)
				{
					flag=1;
					printf("No\n");
					break;
				}
			}
			if(flag==1)
			{
				continue;
			}
			printf("Yes\n");
		}
		
	}
return 0;
}
