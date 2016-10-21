#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int l,n;
		scanf("%lld",&l);
		if(l<7)
		{
			printf("-1\n");
			continue;
		}
		n=floor(-2+sqrt(9+l));
		printf("%lld\n",n);      
	}
return 0;
}
