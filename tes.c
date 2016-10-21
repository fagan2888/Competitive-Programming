#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,count=0,flag=0;
		scanf("%lld",&n);
		while(n!=1)
		{
			n=n+flag;
			flag=0;
			if(n%2!=0)
			{
				flag=1;
				n=n-1;
				count++;
			}
			n=n/2;
		}
		printf("%lld\n",count);
	}
return 0;
} 
