#include<stdio.h>

int main()
{
	long long int n,k,q,m,i;
	char s[10];
	scanf("%lld",&n);
	long long int money[100000]={0};
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%s",s);
		if(strcmp(s,"UPDATE")==0)
		{
			scanf("%lld%lld",&k,&m);
			for(i=k;i<=n;i=i+k)
			{
				money[i-1]+=m;
			}
		}
		else
		{
			scanf("%lld",&k);
			printf("%lld\n",money[k-1]);
		}
	}
	
return 0;
}
