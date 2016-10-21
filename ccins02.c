#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,count=0,i=2;
		scanf("%ld",&n);
		while(n>0)
		{
			n=n/i;
			count++;
		}
		
		printf("%ld\n",32-count);
	}
return 0;
}
