#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n,j,W,max,profit=0,weight_so_far=0;
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
	
	for(i=0;i<n;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(v[max]<v[j])
			{
				max=j;
			}
		}
		swap(v[i],v[max]);
		swap(w[i],w[max]);
		
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(weight_so_far+w[i]<=W)
		{
			profit+=v[i];
			weight_so_far+=w[i];
		}
	}
	
	cout<<"\nUsing greedy algo the total profit is "<<profit;
	
return 0;
}
