#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int freq[1000000]={0};
long int a[1000000],b[1000000];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(freq,0,sizeof(freq));
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		long int n,q,i,j;
		long long int amount=0;
		scanf("%ld%ld",&n,&q);
		long int num[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&num[i]);
		}
		sort(num,num+n);
		
		for(i=0;i<q;i++)
		{
			scanf("%ld%ld",&a[i],&b[i]);  
		}
		
		for(i=0;i<q;i++)
		{
			for(j=a[i];j<=b[i];j++)
			{
				freq[j-1]++;
			}
		}
		
		sort(freq,freq+n);
		for(i=0;i<n;i++)
		{
			amount+=(freq[i]*num[i]);
		}
		
		
		printf("%lld\n",amount);
	}
return 0;
}
