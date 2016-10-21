#include<iostream>
using namespace std;
typedef long long int ll;

ll matrixchainmul(int *p,int size)
{
	int dp[size][size],i,j,k,l,min;           //dp[i..j] will contain multiplication needed for matricies represented by p[i..j]
	for(i=0;i<size;i++)
	{
		dp[i][i]=0;
	}
	
	for(l=2;l<size;l++)
	{
		for(i=1;i<size-l+1;i++)
		{
			j=i+l-1;
			printf("%d %d\n",j,p[j]);
			dp[i][j]=1000000000;
			for(k=i;k<=j-1;k++)
			{
				min=dp[i][k]+dp[k+1][j]+(p[i-1]*p[k]*p[j]);
				if(min<dp[i][j])
				{
					dp[i][j]=min;
				}
			}
		}
	}
	
	return dp[1][size-1];
}


int main()
{
	int p[]={40,20,30,10,30},size;
	long long int ans;
	size=(sizeof(p)/sizeof(p[0]));
	ans=matrixchainmul(p,size);
	
	cout<<"number of products needed - "<<ans;
return 0;
}
