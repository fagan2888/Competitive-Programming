#include<stdio.h>

long long int c(long long int a,long long int b)
{
	if(b>a/2)
	{
		b=a-b;
	}
	int i;
	long long int r=1;
	for(i=1;i<=b;i++)
	{
		r*=a;
		r/=i;
		a--;
	}
return r;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,ans;
		scanf("%lld%lld",&n,&k);
		if(n==k)
		{
			printf("1\n");
			continue;
		}
		
		ans=c((n-1),(n-k));
		
		printf("%lld\n",ans);
	}
	
}
