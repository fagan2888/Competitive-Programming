#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	long long int n,k,i,j,count=0,sum,num;
	double avg;
	scanf("%lld%lld",&n,&k);
	long long int cum[n],a[n];
	memset(cum,0,sizeof(cum));
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(i==0)
		cum[i]=a[i];
		else
		cum[i]=cum[i-1]+a[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		
			if(i==j)
			{
				if(a[i]>=k)
				count++;
				continue;
			}
			
			if(i==0)
			sum=cum[j];
			else
			sum=cum[j]-cum[i-1];
			
			num=j-i+1;
			avg=(double)(sum/num);
			if(avg>=k)
			count++;
			
		}
	}
	
	printf("%lld\n",count);
return 0;
}
