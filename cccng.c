#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int c,d,ans=0,maximum,minimum,factor,base;
		scanf("%lld%lld",&c,&d);
		maximum=max(c,d);
		minimum=min(c,d);
		base=maximum-2;
		factor=maximum-1;
		ans=(factor*(minimum-2))+base;
		printf("%lld\n",ans);
		
	}
return 0;
}
