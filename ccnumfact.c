#include<stdio.h>

int freq[1000001]={0};
void primefactors(long int n)
{
	long int i,j;
	
	while(n%2==0)
	{
		freq[2]++;
		n=n/2;
	}
	
	for(i=3;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				freq[i]++;
				n=n/i;
			}
			
		}
	}
	
	if(n>2)
	{
		freq[n]++;
	}
}

int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		long int ans=1,num;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&num);
			primefactors(num);
		}
		
		for(i=2;i<1000001;i++)
		{
			if(freq[i]!=0)
			{
				ans*=(freq[i]+1);
			}
		}
		
		printf("%ld\n",ans);
		memset(freq,0,sizeof(int)*1000001);
	}
return 0;
}




