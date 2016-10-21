#include<stdio.h>
#define min(a,b) a<b?a:b
long int gcd(long int a,long int b)
{
	long int m,g;
	m=min(a,b);
	if(m==0)
	{
		return a;
	}
	else
	{
		if(a>b)
		{
			a=a%b;
			g=gcd(b,a);
		}
		else
		{
			b=b%a;
			g=gcd(a,b);
		}
	}
	return g;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,m,i,j,count=0,a;
		scanf("%ld%ld",&n,&m);
		if(m==1)
		{
			printf("%ld\n",n);
			continue;
		}
		else if(n==1)
		{
			printf("%ld\n",m);
			continue;
		}
		else if (m==n) 
		{
			printf("%ld\n",m);
		}
		else
		{
			printf("%ld\n",gcd(n-1,m-1)+1);
		}
	}
return 0;
}
