#include<stdio.h>
#define max(a,b,c) ((a>b?a:b)>c?(a>b?a:b):c)

double c(double n,double r)
{
	if(r<0)
	return 0;
	if(n-r<0)
	return 0;
	double ans=1,s;
	s=n-r;
	if(s==0)
	s=1;
	while(n>1 && s>1 && r>1)
	{
		ans*=(n/(s*r));
		n--;r--;s--;
		
	}
	if(r==1 && s!=1)
	{
		while(n>1 && s>1)
		{	
			ans*=(n/s);
			n--;s--;
			
		}
	}
	else if(s==1 && r!=1)
	{
		while(n>1 && r>1)
		{	
			ans*=(n/r);
			n--;r--;
			
		}
	}
	if(r==1 && s==1)
	{
		while(n>1)
		{	
			ans*=n;
			n--;
		}
	}
return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int t1,t2,t3,t4,maximum,i,j,k,s,r,p,l,m,n,total;
		double total_comb=0,prob_event,prob_of_winning=0,ans=0,retry;
		scanf("%lld%lld%lld%lld",&t1,&t2,&t3,&t4);
		if(t1==t2)
		{
			printf("0.500000\n");
			continue;
		}
		total=t1+t2+t3-t4;
		//printf("%lld\n",total);
		total_comb=c(t1+t2+t3,t4);
		//printf("total_comb=%lf\n",total_comb);
		
		for(i=t4;i>=0;i--)
		{
			s=t4-i;
			for(j=s;j>=0;j--)
			{
				r=t4-(i+j);
				for(k=r;k>=0;k--)
				{
					prob_of_winning=0;
					p=r-k;
					if(((i+k+p)!=t4) || i<0 || k<0 || p<0)
					continue;
					//printf("i=%lld\nk=%lld\np=%lld\nsum=%lld\n",t1-i,t2-k,t3-p,i+k+p);
					
						//printf("a=%lf\n",(double)(t1-i)/total);
						prob_of_winning+=(double)(t1-i)/total;
						//printf("prob_win=%lf\n",prob_of_winning);
						if(t3-p<0)
						n=0;
						else
						n=t3-p;
						for(l=n;l>0;l--)
						{
							retry=1;
							for(m=n;m>=l;m--)
							{
								retry*=(double)m/(total-(n-m));
							}
							retry*=(double)(t1-i)/(total-(n-l+1));
							prob_of_winning+=retry;
						}
					
					//printf("ans=%lf\nprob_win=%lf\n",ans,prob_of_winning);
					ans+=((c(t1,i)*c(t2,k)*c(t3,p))*prob_of_winning)/total_comb;
				}
			}
		}
		
		printf("%lf\n",ans);
		
	}
	
return 0;
}
