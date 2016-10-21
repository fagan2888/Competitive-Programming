#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,ans;
		long double root,tmp;
		scanf("%lld",&n);
		root=sqrt(1+8*(n-1));
		tmp=(-1+root)/2;
		ans=ceil(tmp)+1;
		printf("%lld\n",ans);
		
	}
return 0;
}
