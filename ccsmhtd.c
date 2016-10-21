#include<stdio.h>

int main()
{
	int n,i,count1=0,count2=0;
	scanf("%d",&n);
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[n-i-1]=a[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<=a[i-1])
		{
			count1++;
			a[i]=a[i-1]+1;
		}
		if(b[i]>=b[i-1])
		{
			count2++;
			b[i]=b[i-1]-1;
			if(b[i]<=0)
			{
				count2=10000000;
			}
		}
	}
	if(count1<count2)
	{
		printf("%d\n",count1);
	}
	else
	{
		printf("%d\n",count2);
	}
return 0;
}
