#include<stdio.h>
#include<math.h>
#define mod 1000000007
int digits(long long int n)
{
	int d=0;
	while(n!=0)
	{
		d++;
		n=n/10;
	}
	return d;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int l,r,sum=0,num1,num2,tmp;
		int ld,rd;
		scanf("%lld%lld",&l,&r);
		ld=digits(l);
		rd=digits(r);
		//printf("%d %d\n",ld,rd);
		if(ld==rd)
		{
			sum=(((r+l)*(r-l+1)/2))%mod;
			sum=(sum*rd)%mod;
		}
		else
		{
			num1=r;
			num2=pow(10,rd-1);
			tmp=((((num1+num2)*(num1-num2+1)/2))%mod);
			tmp=(tmp*rd)%mod;
			sum=(sum+tmp)%mod;
			//printf("%lld\n",sum);
			rd--;
			while(rd!=ld)
			{
				//printf("%lld\n",sum);
				num1=pow(10,rd)-1;
				num2=pow(10,rd-1);
				tmp=((((num1+num2)*(num1-num2+1)/2))%mod);
				tmp=(tmp*rd)%mod;
				sum=(sum+tmp)%mod;
				rd--;
			}
			
			if(rd==ld)
			{
				num1=pow(10,rd)-1;
				num2=l;
				tmp=((((num1+num2)*(num1-num2+1)/2))%mod);
				tmp=(tmp*rd)%mod;
				sum=(sum+tmp)%mod;
			}
		}
		
		
		printf("%lld\n",sum);
		
	}
return 0;
}
