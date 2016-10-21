#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,tmp=2;
		scanf("%lld",&n);
		while(n%2==0)
		{
			tmp*=2;
			n=n/2;
		}
		printf("%lld\n",tmp);
	}
return 0;
}
