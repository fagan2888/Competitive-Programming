#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,x,i,s,f,sum=0,flag=0,j,pos;
	scanf("%lld%lld",&n,&x);
	long long int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=ceil(a[i]/2.0);
		c[i]=a[i]-b[i];
		sum+=a[i];
	}
	
	if(x>=sum)
	{
		printf("0 %lld",n);
		return 0;
	}
	
	sort(a,a+n);
	f=n;s=0;
	for(i=0;i<n;i++)
	{
		if(x>=(a[i]+1)/2)
		{
			x=x-((a[i]+1)/2);
			f--;
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		if(x>=(a[i]+1)/2)
		{
			x=x-((a[i]+1)/2);
			s++;
		}
	}
	
	printf("%lld %lld\n",f,s);
	
return 0;
}
