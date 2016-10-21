#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,ans=0;
		scanf("%d",&n);
		int p[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
		}
		sort(p,p+n);
		j=n/2;
		for(i=0;i<n;i++)
		{
			if(i!=j)
			{
				ans+=abs(p[i]-p[j]);
			}
		}
		printf("%d\n",ans);
	}
return 0;
}
