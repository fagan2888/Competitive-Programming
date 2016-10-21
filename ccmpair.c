#include<stdio.h>
long long int /*ab[1000000][2],*/c[100000]={0},freq[100000]={0};
int main()
{
	long long int tmp,n,m,i,j,a,b,count=0,ans=0;
	int flag=0;
	scanf("%lld%lld",&n,&m);

	for(i=0;i<m;i++)
	{
		scanf("%lld%lld",&a,&b);
		if(freq[a-1]==0 && freq[b-1]==0)
		{
			count++;
			freq[a-1]=count;
			freq[b-1]=count;
			
		}
		else if((freq[a-1]!=0 && freq[b-1]==0))
		{
			freq[b-1]=freq[a-1];
		}
		else if (freq[a-1]==0 && freq[b-1]!=0)
		{
			freq[a-1]=freq[b-1];
		}
		else
		{
			//printf("hello\n");
			if(freq[a-1]<freq[b-1])
			{
				count--;
				tmp=freq[b-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[a-1];
					}
				}
			}
			else if(freq[a-1]>freq[b-1])
			{
				count--;
				tmp=freq[a-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[b-1];
					}
				}
			}
		}
		
		
	}
	/*for(j=0;j<n;j++)
		{
			printf("%d ",freq[j]);
		}
		printf("\n");
	*/	
	if(m==0)
	{
		ans=n*(n-1);
		ans=ans/2;
		printf("%lld\n",ans);
	}
	else
	{
		
	
	for(i=0;i<n;i++)
	{
		c[freq[i]]++;
	}
	/*for(i=0;i<count;i++)
	{
		printf("%lld ",c[i]);
	}*/
	
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count+1;j++)
		{
			ans+=c[i]*c[j];
		}
	}
	printf("%lld\n",ans);
	}
	
	
return 0;
}

