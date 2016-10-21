#include<stdio.h>
#include<algorithm>
#include<set>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef set<iii> siii;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,count=0,tmp,prev,curr,fl=0,fsave,ssave;
		scanf("%d%d",&n,&k);
		siii o;
		int s[n],f[n],p[n];
	
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d",&s[i],&f[i],&p[i]);			
		}
		
		for(i=0;i<n;i++)
		{
			o.insert(iii(p[i],ii(f[i],s[i])));
		}
		/*
		tr(o,it)
		{
			printf("%d %d %d \n",it->first,it->second.first,it->second.second);
		}
		*/
		tr(o,it)
		{
			curr=it->first;
			if(fl==0)
			{
				fsave=it->second.first;
				ssave=it->second.second;
				fl=1;
				prev=curr;
				count++;
			}
			else
			{
				if(prev==curr)
				{
					if(it->second.second>=fsave)
					{
						count++;
						fsave=it->second.first;
						ssave=it->second.second;
					}
					prev=curr;
				}
				else
				{
					fsave=it->second.first;
					ssave=it->second.second;
					prev=curr;
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
return 0;
}
