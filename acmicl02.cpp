#include<stdio.h>
//#include<iostream> 
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int r,m;
	scanf("%d%d",&r,&m);
	while(!(r==0 && m==0))
	{
		int w[m],v[m],ans=0,minn=100000000,k;
		int i,j;
		int dp[m+1][r+1];
			for(i=0;i<m;i++)
			{
				scanf("%d%d",&w[i],&v[i]);
			}
			
			for(i=0;i<=r;i++)
			{
				dp[0][i]=0;
			}
			for(i=0;i<=m;i++)
			{
				dp[i][0]=0;
			}
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=r;j++)
				{
					if(w[i-1]>j)
					{
						dp[i][j]=dp[i-1][j];
						continue;
					}
					dp[i][j]=max(dp[i-1][j],(dp[i-1][j-w[i-1]]+v[i-1]));
				}
			}
			k=r;
			while(dp[m][k]==dp[m][r])        
			{
				ans=0;
				i=m;j=k;
				label:
				while(i>0 && j>0)
				{
						if(dp[i][j]==(dp[i-1][j-w[i-1]]+v[i-1]))
						{
		//					printf("%d\n",w[i-1]);
							//printf("%d %d\n",i,j);
							ans+=w[i-1];
							j=j-w[i-1];
							i=i-1;
		//					printf("%d %d\n",i,j);
							goto label;
						}
						else
						{
							i=i-1;
						}
						//printf("%d %d\n",i,j);
				}
				if(ans!=0)
				minn=min(ans,minn);
				k--;
			}
			
	/*for(i=0;i<=m;i++)
	{
		for(j=0;j<=r;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";*/
			printf("%d %d\n",ans,dp[m][r]);
			scanf("%d%d",&r,&m);
	}
return 0;
}
