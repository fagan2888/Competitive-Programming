#include<stdio.h>
#define MOD 1000000007

//int a[]={2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728}
long long int power(n)
{
	long long int ans=2,j=1,i,count=0;
	
	if(n==1)
	{
		return ans;
	}
	if(n==0)
	{
		return 1;
	}
	while(j<n) 
	{
		j+=j;
		count++;
	}
	if(n!=1)
	{
		j=j/2;
		count--;
	}
	
	for(i=0;i<count;i++)
	{
		ans=(ans*ans)%MOD;
	}

	ans=(ans*power(n-j))%MOD;
	/*if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 2;
	}
	if(n%2==0)
	{
		ans=(power(n/2)*power(n/2))%MOD;
	}
	else    
	{
		ans=(power(n/2)*power(n/2)*2)%MOD;
	}*/
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,ans=0;
		scanf("%lld",&n);
		ans=power(n)-1;
		printf("%lld\n",ans);
	}
	
return 0;
}
