#include<stdio.h>
long long int freq[10]={0};
int main()
{
	long long int n,i,j,ans=0,flag=0;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]<=1)
		{
			freq[a[i]]++;
		}
		else
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		ans=(freq[1]*(freq[1]-1))/2;
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ans+=a[i]&a[j];
			}
		}
	}
	
	
	printf("%lld\n",ans);
return 0;
}
