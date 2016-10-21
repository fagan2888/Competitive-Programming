#include<stdio.h>
#include<iostream>
using namespace std;

int mat[1000000]={0};
int main()
{
	long long int n,q,i;
	scanf("%lld%lld",&n,&q);
	long long int a[n],sum[n],total=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		total+=a[i];
		sum[i]=total;
	}
	
	while(q--)
	{
		char ch;
		long long int i,j,p,q,ans=0;
		cin>>ch>>i>>j;
		if(ch=='S')
		{
			for(p=i;p<=b;p++)
			{
				ans+=a[p];
			}
			printf("%lld\n",ans);
		}
		else if(ch=='G')
		{
			a[i]+=j;
			mat[i]+=j;
			total+=j;
		}
		else
		{
			a[i]-=j;
			mat[i]-=j;
			total-=j;
		}
		
		
	}
	
return 0;
}
