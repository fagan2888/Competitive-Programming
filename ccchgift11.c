#include<stdio.h>
#define min(a,b,c) (((a<b)?a:b)<c?((a<b)?a:b):c)
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,ad,s,m,ans,flag=0;
		scanf("%lld",&n);
		long long int a[n],num[9];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]>=0)
			{
				flag=1;
			}
			
		}
		if(n==1)
		{
			printf("%lld\n",a[0]);
			continue;
		}
		if(flag==0 && (n%2!=0))
		{
			ans=1;
			for(i=0;i<n;i++)
			{
				ans*=a[i];
			}
			printf("%lld\n",ans);
			continue;
		}
		
		i=2;
		ad=a[0]+a[1];
		s=a[0]-a[1];
		m=a[0]*a[1];
		ans=min(ad,s,m);
		while(i<n)
		{
			ad=ans+a[i];
			s=ans-a[i];
			m=ans*a[i];
			ans=min(ad,s,m);
			i++;
		}
		printf("%lld\n",ans);
	}
return 0;
}
