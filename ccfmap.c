#include<stdio.h>
#include<string.h>

int c[20000]={0};
int ans[20000]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,hq1,hq2,i,j;
		scanf("%d%d%d",&n,&hq1,&hq2);
		memset(c,0,sizeof(c));
		memset(ans,0,sizeof(ans));
		
		for(i=0;i<n;i++)
		{
			if(i!=hq1-1)
			{
				scanf("%d",&c[i]);
			}
		}
		
		ans[c[hq2-1]-1]=hq2;
		j=c[hq2-1]-1;
		while(j!=hq1-1)
		{
			ans[c[j]-1]=j+1;
			j=c[j]-1;
		}
		
		/*for(i=0;i<n;i++)
		{
			if(i!=hq2-1)
			{
				printf("%d ",ans[i]);
			}
		}
		printf("\n");*/
		ans[hq2-1]=0;
		
		for(i=0;i<n;i++)
		{
			if(ans[i]==0)
			{
				ans[i]=c[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(i!=hq2-1)
			{
				printf("%d ",ans[i]);
			}
		}
		printf("\n");
	
	}
return 0;
}
