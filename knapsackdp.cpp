#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n,j,W;
	cout<<"enter the number of items\n";
	cin>>n;
	cout<<"enter the capacity of knapsack\n";
	cin>>W;
	int w[n],v[n],dp[n+1][W+1];
	cout<<"enter their weights and their corresponding value\n";
	for(i=0;i<n;i++)
	{
		cin>>w[i]>>v[i];
	}
	
	for(i=0;i<=W;i++)
	{
		dp[0][i]=0;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=W;j++)
		{
			if(w[i-1]>j)
			{
				dp[i][j]=dp[i-1][j];
				continue;
			}
			dp[i][j]=max(dp[i-1][j],(dp[i-1][j-w[i-1]]+v[i-1]));
		}
	}
	
	/*for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";*/
	cout<<"\n"<<dp[n][W];
	
return 0;
}
