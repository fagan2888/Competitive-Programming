#include<stdio.h>
#include<string.h>
#include<math.h>

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
		while(i>=0)
		{
			while(a[i]>=i+1)
			{
				a[i]=a[i]-(i+1);
				count++;
			}
			
			if(a[i]<i+1)
			{
				i--;
			}
		}
		
		
			
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
