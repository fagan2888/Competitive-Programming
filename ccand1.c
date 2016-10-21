#include<stdio.h>
long long int freq[10]={0};
int main()
{
	long long int n,i,j,ans=0,x,k;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	x=1;
	for(i=0;i<30;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if((x&a[j])>0)
			{
				k++;
			}
		}
		ans+=(x*(k*(k-1))/2);
		x=x*2;
	}
	
	printf("%lld\n",ans);
return 0;
}
