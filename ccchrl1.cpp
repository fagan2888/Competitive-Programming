#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,count=0,cost=0,j;
		scanf("%d%d",&n,&k);
		if(k>1000000)
		{
			
		int c[n],w[n];
		float r[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&c[i],&w[i]);
		}
		
		for(i=0;i<n;i++)
		{
			r[i]=((float)w[i]/c[i]);
		}
		/*for(i=0;i<n;i++)
		{
			printf("%f\n",r[i]);
		}*/
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(r[j]<r[j+1])
				{
					swap(r[j],r[j+1]);
					swap(c[j],c[j+1]);
					swap(w[j],w[j+1]);
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			cost=cost+c[i];
			if(cost>k)
			{
				cost=cost-c[i];
				continue;
			}
			
			count=count+w[i];
		}
		printf("%d\n",count);       
		}
		else
		{
			int c[n],w[n],dp[n+1][k+1];
			for(i=0;i<n;i++)
			{
				scanf("%d%d",&c[i],&w[i]);
			}
			
			for(i=0;i<=k;i++)
			{
				dp[0][i]=0;
			}
			for(i=0;i<=n;i++)
			{
				dp[i][0]=0;
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=k;j++)
				{
					if(c[i-1]>j)
					{
						dp[i][j]=dp[i-1][j];
						continue;
					}
					dp[i][j]=max(dp[i-1][j],(dp[i-1][j-c[i-1]]+w[i-1]));
				}
			}
			printf("%d\n",dp[n][k]);
		}
	}
return 0;
}
