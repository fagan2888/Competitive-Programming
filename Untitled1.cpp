#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int k,n,i,sum=0;
		scanf("%ld%ld",&n,&k);
		long int w[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&w[i]);
			sum+=w[i]; 
		}
		sort(w,w+n);
		if (k<=n/2)
		{
			for(i=0;i<k;i++)
			{
				sum-=w[i];
			}
		}
		else
		{
			for(i=0;i<n-k;i++)
			{
				sum-=w[i];
			}
		}
		
		printf("%ld\n",sum);
		
	}
	
return 0;
}
