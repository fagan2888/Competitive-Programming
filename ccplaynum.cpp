#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int sum[1000000]={0};
int freq[1000000]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(sum,0,sizeof(sum));
		memset(freq,0,sizeof(freq));
		long int a,b,n,q,i,j;
		long long int amount=0;
		scanf("%d%d",&n,&q);
		int num[n],query[q];
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		
		for(i=0;i<q;i++)
		{
			scanf("%d%d",&a,&b);  
			query[i]=(b-a);
		}
		
		sort(num,num+n);
		sum[0]=num[n-1];
		for(i=1;i<n;i++)
		{
			sum[i]=sum[i-1]+num[n-i-1];
		}
		
		for(i=0;i<q;i++)
		{
			amount+=sum[query[i]];
		}
		
		printf("%lld\n",amount);
	}
return 0;
}
