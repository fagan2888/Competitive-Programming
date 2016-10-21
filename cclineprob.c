#include<stdio.h>
#include<math.h>  
long long int gcd(long long int a,long long int b) {
    if(a<b) return gcd(b,a);
    long long int c;
    while(b)
        c = a%b, a = b, b = c;
    return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x1,x2,y1,y2;
		long long int n,m,ans;
		scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		if(x1!=x2 && y1!=y2)
		{
			if(x1>x2) 
			{
				n=x1-x2;
			}
			else
			n=x2-x1;
			
			if(y1>y2) 
			{
				m=y1-y2;
			}
			else
			m=y2-y1;
			
			ans=n+m-gcd(n,m);
		}
		else
		{
			ans=0;
		}
		printf("%lld\n",ans);
	}
return 0;
}
