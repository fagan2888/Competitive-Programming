#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,sum=0,trust=0,tmp,count_abra=0,count_kadabra=0;
		scanf("%d",&n);
		int a[n],p[n];
		double pd[n],ans=0,prod;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			if(p[i]==100)
			{
				count_abra+=a[i];
			}
			if(p[i]==0)
			{
				count_kadabra+=a[i];
			}
			
			pd[i]=p[i]/100.0;
		}
		
		for (i = 0 ; i < ( n - 1 ); i++)
		{
		    for (j = 0 ; j < n - i - 1; j++)
		    {		    	
		    	if (a[j] > a[j+1]) 
		    	{
		        	swap(a[j],a[j+1]);
		        	swap(p[j],p[j+1]);
		        	swap(pd[j],pd[j+1]);
		      	}
		    }
		}
		/*if(n==2)
		{
			
		}*/
		/*for(i=0;i<n;i++)
		{
			printf("%lf ",pd[i]);
		}
		printf("\n");*/
		//printf("sum=%d\n",sum);
		tmp=sum-count_abra-count_kadabra;
		//printf("tmp=%d\n",tmp);
		for(i=0;i<n;i++)
		{
			if(p[i]==100 || p[i]==0)
			{
				continue;
			}
			//printf("1\n");
			prod=1;
			tmp=tmp-a[i];
			trust+=a[i];
			//printf("abra=%d\nkadabra=%d",trust+count_abra,tmp+count_kadabra);
			if((trust+count_abra)>=(tmp+count_kadabra))
			{
				//printf("1\n");
				for(j=0;j<=i;j++)
				{
					if(p[j]!=0 && p[j]!=100)
					{
						prod*=pd[j];
					}
				}
				//printf("prod=%lf\n",prod);
				for(j=i+1;j<n;j++)
				{
					if(p[j]!=0 && p[j]!=100)
					{
						prod*=(1-pd[j]);
					}
				}
				//printf("prod=%lf\n",prod);
				ans+=prod;
			}
			/*else
			{
				//printf("1\n");
				for(j=0;j<=i;j++)
				{
					if(p[j]!=0 && p[j]!=100)
					{
						prod*=(1-pd[j]);
					}
				}
				//printf("prod=%lf\n",prod);
				for(j=i+1;j<n;j++)
				{
					if(p[j]!=0 && p[j]!=100)
					{
						prod*=pd[j];
					}
				}
				//printf("prod=%lf\n",prod);
				ans+=prod;
			}*/
		
		}
		printf("%lf\n",ans);
	}
return 0;
}
