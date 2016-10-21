#include<stdio.h>
#include<algorithm>
#include<vector>

#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,s,e,curr_max,max_sofar,j,tmp,flag=0,tmp2,pos,p,count=0,tmp3=0,min=1000000000;
		long long int sum=0,m,ans=-1000000000;
		scanf("%d%d",&n,&k);
		int a[n];
		long long int cum[n];
		vector<int> se;
		
		
		if(k==0)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
					if(i!=0 && i!=n-1)
					{
						if(min>a[i])
						{
							min=a[i];
						}
					}
			}
			for(i=1;i<n-1;i++)
			{
				if(a[i]==min) 
				se.push_back(i);
				
			}
			tr(se,it)
			{
				sum=0;
				pos=*it;
				s=0;
				if(k==0)
				e=pos;
				else
				e=pos-1;
				curr_max=a[s];
				max_sofar=a[s];
			
				for(i=s+1;i<=e;i++)
				{
					
					curr_max=max(a[i],curr_max+a[i]);
					
					max_sofar=max(max_sofar,curr_max);
					
				}
				sum+=max_sofar;
				
				s=pos+1;
				e=n-1;
				//printf("%lld\n",sum);
				curr_max=a[s];
				max_sofar=a[s];
			
				for(i=s+1;i<=e;i++)
				{
					curr_max=max(a[i],curr_max+a[i]);
					max_sofar=max(max_sofar,curr_max);
				}
				sum+=max_sofar;
				ans=max(ans,sum);
			//rintf("%lld\n",ans);
			}
		}		
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				if(i==0)
				cum[i]=a[i];
				else
				cum[i]=cum[i-1]+a[i];
			}
			long long int asum[n-(k+1)];
			m=1000000000;
			
			for(i=0;i<n-(k+1);i++)
			{
				asum[i]=cum[i+k]-cum[i];
				if(asum[i]<m)
				{
					m=asum[i];
				}
				if(asum[i]==m)
				{
					count++;
					se.push_back(i+1);
				}
			}
			
			
			tr(se,it)
			{
				sum=0;
				pos=*it;
				s=0;
				e=pos-1;
				curr_max=a[s];
				max_sofar=a[s];
			
				for(i=s+1;i<=e;i++)
				{
					
					curr_max=max(a[i],curr_max+a[i]);
					
					max_sofar=max(max_sofar,curr_max);
					
				}
				sum+=max_sofar;
				
				s=pos+k;
				e=n-1;
				//printf("%lld\n",sum);
				curr_max=a[s];
				max_sofar=a[s];
			
				for(i=s+1;i<=e;i++)
				{
					curr_max=max(a[i],curr_max+a[i]);
					max_sofar=max(max_sofar,curr_max);
				}
				sum+=max_sofar;
				ans=max(ans,sum);
			//rintf("%lld\n",ans);
			}
		}
		printf("%lld\n",ans);
	}
return 0;
}
