#include<stdio.h>
#include<string.h>

int isless(int s[],int a[],int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		if(s[i]>a[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,j,flag=0;
		scanf("%d%d",&n,&k);
		int val[n][k],sum[k],a[k];
		memset(sum,0,sizeof(sum));
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				scanf("%d",&val[i][j]);
				sum[j]+=val[i][j];
			}
		}
		
		/*for(i=0;i<k;i++)
		{
			printf("%d ",sum[i]);
		}
		printf("\n");*/
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[j]);    
			if(sum[j]>a[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("%d\n",n);
			for(i=1;i<=n;i++)
			printf("%d ",i);
			printf("\n");
			continue;
		}
		
		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<k;j++)
			{
				sum[j]=sum[j]-val[i][j];
			}
			if(isless(sum,a,k))
			{
				break;
			}
		}
		
		
		printf("%d\n",i);
		for(j=1;j<=i;j++)
		printf("%d ",j);
		if(i!=0)
		printf("\n");
		
		
		
	}
return 0;
}
