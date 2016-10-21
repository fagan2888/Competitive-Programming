#include<stdio.h>

long long int p(long long int n,long long int i,long long int m)
{
	long long int a,ans=1;
	for(a=i;a>0;a--)
	{
		ans=(ans*n)%m;
	}
	
	return ans;
}

int gcd(int a, int b) {
    if(a<b) return gcd(b,a);
    int c;
    while(b)
        c = a%b, a = b, b = c;
    return a;
}


int main()
{
	long long int n,k,m,ans=0,i;
	scanf("%lld%lld%lld",&n,&k,&m);
	for(i=1;i<n;i++)
	{
		if(gcd(n,i)==1)
		{
			ans=(ans+p(i,k,m))%m;
		}
	}
	
	printf("%lld\n",ans);
return 0;
}

