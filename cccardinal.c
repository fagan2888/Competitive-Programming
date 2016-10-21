#include<iostream.h>
#include<cstdio>
#include<vector>
#include<algorithm>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
		vector< vector<int> > v(n);
		int i,n,freq[10]={0};
		scanf("%d",&n);
		vector< vector<int> > v(n);
		int num[n],tmp,r;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		for(i=0;i<n;i++)
		{
			memset(freq,0,sizeof(freq));
			tmp=num[i];
			while(tmp!=0)
			{
				r=tmp%10;
				freq[r]++;
				tmp=tmp/10;
			}
			for(i=0;i<10;i++)
			{
				if(freq[i]==0)
				{
					v[i].push_back(num[i]);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			tr(v[i],it)
			{
				printf("%d ",*it);
			}
		}
	}
return 0;
}
