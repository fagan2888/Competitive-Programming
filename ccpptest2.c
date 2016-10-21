#include<stdio.h> 
#include<string.h>
#define max(a,b) (a)>(b)?(a):(b)

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,w;
		scanf("%d%d",&n,&w);
		int c[n],p[n],t[n],a[n],i,j,ans=0,v[n+1][w+1];
		memset(v,0,sizeof(v));
		for(i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
			scanf("%d",&p[i]);
			scanf("%d",&t[i]);
		}
		for(i=0;i<n;i++)
		{
			a[i]=c[i]*p[i];
		}
		
		
	    
	       for(i=0;i<=n;i++)
		   {
		       for(j=0;j<=w;j++)
		       {
		           if(i==0||j==0)
		            {
		            	v[i][j]=0;
		        	}
		           else if(t[i-1] <= j)
		           {
		               v[i][j]=max(a[i-1]+v[i-1][j-t[i-1]],v[i-1][j]);
		           }
		           else
		           v[i][j]=v[i-1][j];
		       }
		   }
		/*for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=w;j++)
	            printf("%d\t",v[i][j]);
	        printf("\n");
	    }*/
		
		ans=v[n][w];
		
		printf("%d\n",ans);
	}
	
return 0;
}
