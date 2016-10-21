#include<stdio.h>
#include<algorithm>
#include<iostream>
#define ten 10
typedef unsigned long long int ull;
using namespace std;

ull m(ull a,ull b,ull c)
{
	if(a==0)
	return 0;
	ull ans=1;
	a=a%c;
	while(b>0)
	{
		if(b%2==1)
		ans=(ans*a)%c;
		
		a=(a*a)%c;
		b=b/2;
	}
return ans%c;
}


ull p(ull a,ull b,ull c)
{
	ull ans=1;
	while(b>0)
	{
		ans=m(ans,a,c);
		b--;
	}
	return ans;
}

int main()
{
	printf("%llu\n",m(5,117,19));
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int n,i,j,dig;
		ull a,b,c;
		scanf("%llu",&n);
		ull l[n];
		char s[n+1];
		for(i=0;i<n;i++)
		{
			scanf("%llu",&l[i]);
		}
		scanf("%llu%llu%llu",&a,&b,&c);
		scanf(" %s",s);
		int mul[n];
		ull add=0,mu=1,ans;
		int rcount=0,p1=-1,p2=n,mcount=0;
		
		for(i=0;i<n;i++)
		{
			if(s[i]=='R')
			{
				rcount++;
				if(i!=0)
				{
					mul[i]=mul[i-1];
				}
				else
				{
					mul[i]=0;
				}
			}
			else if(s[i]=='A')
			{
				if(i!=0)
				{
					mul[i]=mul[i-1];
				}
				else
				{
					mul[i]=0;
				}
				add=(add+a)%c;
			}
			else
			{
				mcount++;
				if(i!=0)
				{
					mul[i]=mul[i-1]+1;
				}
				else
				{
					mul[i]=1;
				}
				add=m(add,b,c);
				mu=m(mu,b,c);
			}
			
			
			if(rcount%2)
			{
				p2=p2-1;
				j=p2;
			}
			else
			{
				p1+=1;
				j=p1;
			}
			ans=(m(l[j],mu,c)+add)%c;
			printf("%llu ",ans);
		}
		/*
		for(i=0;i<n;i++)
		{
			printf("%d ",mul[i]);
		}*/
		printf("\n");
		
	}
return 0;
}
