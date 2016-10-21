#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,tmp;
		scanf("%lld",&n);
		if(n%2!=0)
		{
			printf("2\n");
		}
		else
		{
			tmp=2*n;
			for(i=n-1;i>=1;i=i-2)
			{
				if(tmp%i==0)
				{
					break;
				}
			}
			tmp=tmp/i;
			printf("%lld\n",tmp);
		}
	}
return 0;
}
