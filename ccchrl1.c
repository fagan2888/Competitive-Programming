#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,count=0,cost=0;
		scanf("%d%d",&n,&k);
		int c[n],w[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&c[i],&w[i]);
		}
		sort(c,c+n);
		for(i=0;i<n;i++)
		{
			cost=cost+c[i];
			if(cost>k)
			break;
			
			count++;
		}
		printf("%d\n",count);
	}
return 0;
}
