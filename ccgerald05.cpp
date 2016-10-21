#include<stdio.h>
#include<iostream>
#define MOD 1000000007
using namespace std;

long long int c(long long int a,long long int b)
{
	if(b>a/2)
	{
		b=a-b;
	}
	int i;
	long long int r=1;
	for(i=1;i<=b;i++)
	{
		r=(r*a)%MOD;
		r/=i;
		a--;
	}
return r;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[4],s,i,j;
		scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
		scanf("%d",&s);
		long long int f[s+1];
		long long int ans[s+1];
		
		f[0]=0;
		for(i=1;i<=s;i++)
		{
			f[i]=a[0]+(a[1]*i)+(a[2]*i*i)+(a[3]*i*i*i);
		}
		cout<<f[10]<<"\n";
		ans[0]=0;     
		ans[1]=f[i];
		for(i=2;i<=s;i++)
		{
			if(i<=3)
			{
				ans[i]=((ans[i-1]*c(f[1],1))+f[i])%MOD;
			}
			else
			{
				ans[i]=((ans[i-1]*c(f[1],1))+f[i])%MOD;
				for(j=i/2;j>=2;j--)
				{
					ans[i]=(ans[i]+((c(f[j],1)*c(f[i-j],1))%MOD))%MOD;
				}
				
			}
			cout<<ans[i]<<"\n";
		}
		
		printf("%lld\n",ans[s]);
	}
	
	
return 0;
}
