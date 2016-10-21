#include<stdio.h>

int main()
{
	int n,q,i;
	scanf("%d%d",&n,&q);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(q--)
	{
		int l,r,k,count=0;
		scanf("%d%d%d",&l,&r,&k);
		for(i=l-1;i<=r-1;i++)
		{
			if(a[i]%k==0)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	
return 0;
}
