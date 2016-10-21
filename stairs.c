#include<stdio.h>
#include<string.h>
#include<math.h>

double c(double n,double r,double s)
{

	double ans=1;
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
/*long long int c(int t,int x,int y)
{
	long long int ans;
	
}*/
//typedef long long int ll

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,x,y,total;
		double ans=0;
		scanf("%d",&n);
		if(n%2==0)
		{
			
			x=n/2;
			y=0;
			total=n/2;
			while(x>=0 && total<=n)
			{
				ans+=c((double)total,(double)x,(double)y);
				x=x-1;
				y=y+2;
				total+=1;
				//printf("%lld\n",(long long int)ans);
			}
		}
		else
		{
			
			x=n/2;
			y=1;
			total=n/2+1;
			while(x>=0 && total<=n)
			{
				ans+=c((double)total,(double)x,(double)y);
				x=x-1;
				y=y+2;
				total+=1;
			}
		}
		printf("%lld\n",(long long int)ans);
	}
return 0;
}
