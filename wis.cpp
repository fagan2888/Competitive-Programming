#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n;
	cout<<"enter number of edges\n";
	cin>>n;
	int dp[n+1],a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	dp[0]=0;
	dp[1]=a[0];
	for(i=2;i<=n;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
	}
	cout<<"\nmaximum sum is "<<dp[n];
	cout<<"\n";
	
	for(i=1;i<=n;i++)
	{
		cout<<dp[i]<<" ";                       
	}
	
	
return 0;
	
}
