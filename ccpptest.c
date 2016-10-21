#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,w;
		scanf("%d%d",&n,&w);
		int c[n],p[n],t[n],a[n],i,j,tmp,ans=0,time=0,ans2=0;
		float z[n],ztmp;
		for(i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
			scanf("%d",&p[i]);
			scanf("%d",&t[i]);
		}
		for(i=0;i<n;i++)
		{
			a[i]=c[i]*p[i];
			z[i]=(float)(a[i]/t[i]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(z[j]<z[j+1])
				{
					ztmp=z[j];
					z[j]=z[j+1];
					z[j+1]=ztmp;
					
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
					
					tmp=t[j];
					t[j]=t[j+1];
					t[j+1]=tmp;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			if(t[i]>w)
			{
				continue;
			}
			if(time+t[i]<=w)
			{
				ans+=a[i];
				time+=t[i];
			}
		}
		
		/*for(i=0;i<n;i++)
		{
			if(t[i]>w)
			{
				continue;
			}
			if(time+t[i]<=w)
			{
				ans+=a[i];
				time+=t[i];
			}
			if(time>=w)
			{
				break;
			}
			
		}
		time=0;
		for(i=n-1;i>=0;i--)
		{
			if(t[i]>w)
			{
				continue;
			}
			if(time+t[i]<=w)
			{
				ans2+=a[i];
				time+=t[i];
			}
			if(time>=w)
			{
				break;
			}
			
		}
		if(ans2>ans)
		{
			ans=ans2;
		}*/
		
		printf("%d\n",ans);
	}
	
return 0;
}
