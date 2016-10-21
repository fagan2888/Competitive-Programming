#include<stdio.h>
#include<algorithm>
#include<iostream>
#define MOD 10000007
typedef unsigned long long int ull;
using namespace std;

ull p(ull b)
{
	ull a=2;
	ull ans=1;
	while(b>0)
	{
		if(b%2==1)
		ans=(ans*a)%MOD;
		
		a=(a*a)%MOD;
		b=b/2;
	}
return ans%MOD;
}

/*
ull p(ull a,ull b,ull c)
{
	ull ans=1;
	while(b>0)
	{
		ans=m(ans,a,c);
		b--;
	}
	return ans;
}*/

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ull n;
		scanf("%llu",&n);
		if(n%2==1)
		{
			printf("%llu\n",p(n)-1);
		}
		else
		{
			printf("%llu\n",p(n)+1);
		}
	}
	
return 0;
}
