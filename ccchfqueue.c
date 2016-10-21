#include<stdio.h>
#include<math.h>
#include<string.h>
#define mod 1000000007
int a[1000000],com[1000000];

int main()
{
	long long int n,k,i,j;
	scanf("%lld%lld",&n,&k);
	long long int ans=1,min=1000000,tmp=-1;
	
	for(i=0;i<n;i++)
	{
		com[i]=1;
		scanf("%lld",&a[i]);
		if(a[i]<min)
		min=a[i];
		
	}
	if(k!=2)
	{
	for(i=n-2;i>=0;i--)
	{
		if(a[i]==min)
		{
			continue;
		}
		else
		{
			j=i+1;
			while(a[i]<=a[j] && j<n)
			{
				j++;
			}
			if(j<n)
			{
				if(a[i]>a[j])
				{
					com[i]=(j-i+1);
				}
			}
		}
	}
	//printf("%d\n",min);
	/*for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			com[i]=1;
			continue;
		}
		if(a[i]==min)
		{
			com[i]=1;
			continue;
		}
		j=i+1;
		com[i]=1;
		while(a[i]<a[j] && j<n)
		{
			j++;
		}
		if(a[i]==a[j])
		{
			if(com[j]!=1)
			com[i]=com[j]+(j-i);
		}
		else if(a[i]>a[j])
		{
			com[i]=(j-i+1);
		}
	}*/
	
	/*for(i=0;i<n;i++)
	{
		printf("%lld ",com[i]);
	}
	printf("\n");*/
	for(i=0;i<n;i++)
	{
		ans=(ans*com[i])%mod;
	}
	}
	else
	{
		i=n-1;
		while(a[i]!=1)
		{
			i--;
		}
		tmp=i;
		for(j=i;j>=0;j--)
		{
			if(a[j]==1)
			{
				tmp=j;
			}
			else
			{
				com[j]=(tmp-j+1);
			}
			
		}
		
	for(i=0;i<n;i++)
	{
		ans=(ans*com[i])%mod;
	}	
		
	}
	
	
	printf("%lld\n",ans);
return 0;
}
