#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,m,i,r,count=0,j;
		scanf("%lld%lld%lld",&n,&k,&m);
		int a[n];
		if(m<1)    
		{
			printf("-1\n");
			continue;
		}
		memset(a,0,sizeof(a));
		r=pow(2,n)-1;
		for(i=0;i<=r;i++)
		{
			if(__builtin_popcount(i)==k)
			{
				count++;
				if(count==m)
				{
					break;
				}
			}
		}
		
		if(count<m)
		{
			printf("-1\n");
			continue;
		}
		for(j=n-1;j>=0;j--)
		{
			if(i%2==0)
			{
				a[j]=0;
			}
			else
			{
				a[j]=1;
			}
			i=i/2;
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
return 0;
}
