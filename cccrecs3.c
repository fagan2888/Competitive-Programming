#include<stdio.h>

#define mod 1000000007
long long int a[101]={0};
long long int factmod(long long int n)
{
	long long int f=1,i;
	for(i=n;i>1;i--)
	{
		f=(f*i)%mod;
	}
	return f;
	
}

/*long long int c(long long int n,long long int r)
{
	long long int c,c1;
	c=(factmod(n));
	c1=(factmod(r)*(factmod(n-r)))%mod;
	//printf("c=%lld\n",c);
	//printf("c1=%lld\n",c1);
	c=c/c1;
	return c;
}*/

#include<stdio.h>

long long int c(double n,double r)
{
	long long int m,b;
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
	m=(long long int)ans;
	b=(long long int)(ans+0.2);
	if(m==n)
	{
		return m;
	}
	else
	{
		return b;
	}
}

void calc()
{
	long long int i,ans,r;
	for(i=3;i<10;i++)
	{
		ans=factmod(i);
		r=1;
		while(r!=(i-1))
		{
			ans+=(c(i,r)*a[i-r])%mod;
			r++;
		}
		a[i]=ans; 
		
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	long long int q=3,p=1;
	a[0]=0;a[1]=1;a[2]=3;
	printf("%lld",c(q,p));  
	while(t--)
	{
		calc();
		long long int n;
		scanf("%lld",&n);
		//printf("%lld",c(4,2));
		printf("%lld\n",a[n]);
	}
return 0;
}
