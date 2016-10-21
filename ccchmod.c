#include<stdio.h>
#include<string.h>
//long long int prod[10000][10000];

int main()
{
	int n,i,t,l,r,j,k;
	long long int ans,m,prod;
	scanf("%d",&n);
	int a[n];
	//memset(prod,1,sizeof(prod));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			prod[i][j]=1;
			for(k=i;k<=j;k++)
			{
				prod[i][j]*=a[k];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%lld ",prod[i][j]);
		}
		printf("\n");
	}*/
	
	scanf("%d",&t);
	while(t--)
	{
		prod=1;
		scanf("%d%d%lld",&l,&r,&m);
		if(m==1)
		{
			ans=0;
		}
		else
		{
			for(i=l-1;i<=r-1;i++)
			{
				prod=(prod*a[i])%m;
			}
			ans=prod;
		}
		printf("%lld\n",ans);
		
	}

return 0;
}
