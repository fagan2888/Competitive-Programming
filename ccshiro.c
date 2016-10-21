#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,sum1=0,sum2=0,trust=0,tmp,count_abra=0,count_kadabra=0;
		scanf("%d",&n);
		int a[n],p[n];
		double pd[n],ans=0,prod;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			//sum+=a[i];
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
		
		/*for (i = 0 ; i < ( n - 1 ); i++)
		{
		    for (j = 0 ; j < n - i - 1; j++)
		    {		    	
		    	if (a[j] < a[j+1]) 
		    	{
		        	swap(a[j],a[j+1]);
		        	swap(p[j],p[j+1]);
		        	swap(pd[j],pd[j+1]);
		      	}
		    }
		}*/
		/*if(n==2)
		{
			
		}*/
		/*for(i=0;i<n;i++)
		{
			printf("%lf ",pd[i]);
		}
		printf("\n");*/
		//printf("sum=%d\n",sum);
		//tmp=sum-count_abra-count_kadabra;
		//printf("tmp=%d\n",tmp);
		for(i=0;i<pow(2,n);i++)
		{
			prod=1;
			sum1=0;sum2=0;
			for(j=0;j<n;j++)
			{
			
				if((i&(1<<j))!=0)
				{
					sum1+=a[j];
					prod*=pd[j];
					//printf("prod1=%lf\n",prod);
				}
				else
				{
					sum2+=a[j];
					prod*=(1-pd[j]);
					//printf("prod2=%lf\n",prod);
				}
			}
				if(sum1>=sum2)
				{
					ans+=prod;
					//printf("ans=%lf\n",ans);
				}
		}
		
		printf("%lf\n",ans);
	}
return 0;
}
