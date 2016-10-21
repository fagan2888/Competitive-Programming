#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y,sum,n;
		scanf("%lld%lld",&x,&y);
		n=y-x+1;
		sum=n*(n-1);
		sum/=2;
		printf("%lld\n",sum);
	}
return 0;
}
