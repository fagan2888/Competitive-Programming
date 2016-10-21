#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int t1,t2,t3,t4;
		double ans;
		scanf("%lld%lld%lld%lld",&t1,&t2,&t3,&t4);
		ans=(double)t1/(t1+t2);
		printf("%lf\n",ans);
	}
return 0;
}
