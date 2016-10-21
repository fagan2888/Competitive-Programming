#include<stdio.h>
#include<string.h>
using namespace std;
long int prod1[25000][25000];
long int prod2[25000][25000];
long int prod3[25000][25000];
long int prod4[25000][25000];

int main()
{
	int n,i,t,l,r,j,k;
	long long int ans,m;
	scanf("%d",&n);
	int a[n];
	//memset(prod,1,sizeof(prod));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			prod1[i][j]=1;
			for(k=i;k<=j;k++)
			{
				prod1[i][j]*=a[k];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%lld ",prod1[i][j]);
		}
		printf("\n");
	}
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%lld",&l,&r,&m);
		ans=prod1[l-1][r-1]%m;
		/*if(m==1)
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
		}*/
		printf("%lld\n",ans);
		
	}

return 0;
}
