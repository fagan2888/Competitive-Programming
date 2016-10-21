#include<stdio.h>

int main()
{
	long long int n,ans,sum=0,num;
	scanf("%lld",&n);
	ans=n*(n+1);
	ans=ans/2;
	while(n--)
	{
		scanf("%lld",&num);
		sum+=num;
	}
	if(sum==ans)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
return 0;
}
