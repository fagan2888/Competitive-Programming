#include<stdio.h>
#define MOD 1000000007
long long int cal(int n,int m,int q,int k)
{
	long long int ans,pow=1,i;
	for(i=0;i<n-2;i++)
	{
		pow=(pow*(q+1))%MOD;
	}
	ans=(n*(n-1))%MOD;
	if(ans<0)
	{
		ans+=MOD;
	}
	ans=((ans*pow))%MOD;
	if(ans<0)
	{
		ans+=MOD;
	}
	ans=(ans*(m-q))%MOD;
	if(ans<0)
	{
		ans+=MOD;
	}
	return ans;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,q,k;
		long long int ans;
		scanf("%d%d%d%d",&n,&m,&q,&k);
		ans=cal(n,m,q,k);
		printf("%lld\n",ans);
	}
return 0;
}
