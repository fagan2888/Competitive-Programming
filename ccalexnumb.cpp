#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,num;
		long long int ans;
		scanf("%lld",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%lld",&num);
		}
		ans=n;
		ans=(ans*(ans-1))/2;
		
		printf("%lld\n",ans);
	}
return 0;
}
