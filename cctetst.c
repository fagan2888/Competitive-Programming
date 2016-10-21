#include<stdio.h>

 inline long int inp( )
    {
    	long int n=0;
	    int ch=getchar_unlocked();
    	while( ch >= '0' && ch <= '9' )
    	n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
    	return n;
    }


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
	t=inp();//scanf("%d",&t);
	while(t--)
	{
		int n,i;
		long int g;
		n=inp();//scanf("%d",&n);
		long int a[n];
		for(i=0;i<n;i++)
		{
			a[i]=inp();//scanf("%ld",&a[i]);			
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
