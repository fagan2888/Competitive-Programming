#include<stdio.h>
long int gcd(long int a,long int b)
{
	if(b==0)
	return a;
	else
	return  gcd(b,a%b);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		long int g;
		scanf("%d",&n);
		long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);			
		}
		if(n==1)
		{
			printf("%ld\n",a[0]);
			continue;
		}
		
		g=gcd(a[0],a[1]);
		for(i=2;i<n;i++)
		{
			g=gcd(g,a[i]);
		}
		
		printf("%ld\n",g);
	}
return 0;
}
