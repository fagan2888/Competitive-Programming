#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int count=0,flag=0;
		double n;
		scanf("%lf",&n);
		while((int)n!=1)
		{
			n=n+flag;
			flag=0;
			if(((int)n)%2!=0)
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
