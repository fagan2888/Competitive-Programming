#include<stdio.h>
int a[1000]={0};
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<1000;i++)
	{
		if(i==0)
		{
			a[i]=1;
		}
		else
		{
			a[i]=a[i-1]+__builtin_popcount(i+1);
		}
	}
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",a[n-1]);
	}
return 0;
}
