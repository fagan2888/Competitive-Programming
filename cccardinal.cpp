#include<iostream>
#include<cstring>
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
	
		int i,n,freq[10]={0},j;
		scanf("%d",&n);
		vector< vector<int> > v(10);
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
			for(j=0;j<10;j++)
			{
				if(freq[j]==0)
				{
					v[j].push_back(num[i]);
				}
			}
		}
		
		for(i=0;i<10;i++)
		{
			sort(v[i].begin(),v[i].end());
		}
		
		for(i=0;i<10;i++)
		{
			for(j=0;j<v[i].size();j++)
			{
				printf("%d ",v[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			
		}
	}
return 0;
}
