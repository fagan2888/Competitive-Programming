#include<stdio.h>
#include<string.h>
#include<math.h>

typedef long long int ll

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,count=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		i=n-1;
		label:
		while(a[i]>=i)
		{
			a[i]=a[i]-i;
			count++;
		}
		if(a[i]<i)
		{
			i--;
		}
		if(i<0)
		{
			goto label1;
		}
		goto label;
		label1:
			
		if(count%2==1)
		{
			printf("SHIVAM\n");
		}
		else
		{
			printf("NEERAJ\n");
		}
	}
return 0;
}
