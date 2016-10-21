#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,min1,min2,a,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(i==0)
			{
				min1=a;
			}
			else if(i==1)
			{
				if(a<min1)
				{
					min2=min1;
					min1=a;
				}
				else
				{
					min2=a;
				}
			}
			else
			{
				if(a<min1)
				{
					min2=min1;
					min1=a;
				}
				else if(a<min2)
				{
					min2=a;
				}
			}
		}
		printf("%d\n",min1+min2);
	}
return 0;
}
