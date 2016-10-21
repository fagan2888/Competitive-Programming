#include<stdio.h>
long long int fact(int n)
{
	long long int f=1;
	int c;
	for (c = 1; c <= n; c++)
    f = f * c;
    
    return f;
    
}
double c(double n,double r)
{

	double ans=1,s;
	s=n-r;
	if(s==0)
	s=1;
	while(n>1 && s>1 && r>1)
	{
		ans*=(n/(s*r));
		n--;r--;s--;
		
	}
	if(r==1 && s!=1)
	{
		while(n>1 && s>1)
		{	
			ans*=(n/s);
			n--;s--;
			
		}
	}
	else if(s==1 && r!=1)
	{
		while(n>1 && r>1)
		{	
			ans*=(n/r);
			n--;r--;
			
		}
	}
	if(r==1 && s==1)
	{
		while(n>1)
		{	
			ans*=n;
			n--;
		}
	}
return ans;
}
int main()
{
	int t;
	scanf("%d",&t);	
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		long long int ans;
		ans=(long long int)(c((double)k,(double)n))*fact(n)*fact(k-n);
		printf("%lld\n",ans);
		
	}
	return 0;
}
