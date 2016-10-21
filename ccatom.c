#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 	unsigned long long int n,k,m;
	 	long long int ans;
	 	scanf("%llu%llu%llu",&n,&k,&m);
	 	ans=floor((log10(((double)m)/n))/(log10(k)));
	 	if(n>=m)
	 	{
	 		ans=0;
	 	}
	 	printf("%lld\n",ans);
	}
return 0;
}
