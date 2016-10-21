#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i;
		scanf("%lld",&n);
		long long int p[n],min=1000000000,pos,ans=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&p[i]);
			if(min>p[i])
			{
				min=p[i];
				pos=i;
			}
		}
		for(i=0;i<n;i++)
		{
			if(i!=pos)
			{
				ans+=(p[i]*min);
			}
		}
		printf("%lld\n",ans);
	}
return 0;
}
