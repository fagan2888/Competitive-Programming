#include<stdio.h>
#include<algorithm>
#include<vector>
#define all(c) c.begin(),c.end()
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,count=0;
		scanf("%d",&n);
		int h[n],d[n];
		vector<int> v(n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&h[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&d[i]);
		}
		for(i=0;i<n;i++)
		{
			v[i]=d[i]-h[i];
		}
		while(min_element(all(v))!=0 || max_element(all(v))!=0)
		{
			sort(all(v));
			v[0]+=1;
			for(i=1;i<n;i++)
			{
				v[i]-=1;
			}
			count++;
		}
		return 0;
	}
return 0;
}
