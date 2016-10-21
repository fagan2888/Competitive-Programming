#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,max=0,pos=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(max+pos<=a[i]+i)
			{
				max=a[i];
				pos=i;
			}
		}
		
		printf("%d\n",max+pos);
		
	}
return 0;
}
