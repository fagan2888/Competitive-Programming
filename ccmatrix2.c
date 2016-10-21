#include<stdio.h>

int main()
{
	long long int n,m,c,tmp,i;
	long long int ans;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n*m;i++)
	{
		scanf("%lld",&c);
	}
	
	ans=n*m;
	i=2;
	tmp=(n-1)*(m-1);
	while(tmp!=0 && tmp!=1)
	{
		ans+=tmp;
		tmp=(n-i)*(m-i);
		i++;
	}
	
	printf("%lld\n",ans);
return 0;
}
