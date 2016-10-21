#include<stdio.h>
#include<math.h>
#define MOD 1000000007
typedef unsigned long long int ull;

ull save[20]={0};

ull pp(ull n,ull x)
{
	ull i,ans=1;
	for(i=1;i<=x;i++)
	{
		ans=ans*10;
	}
	return ans;
}
ull power(ull n)
{
	ull ans=2,j=1,i,count=0;
	//printf("%llu\n",n);
	//printf("hello1\n");
	if(n==1)
	{
		return ans;
	}
	if(n==0)
	{
		return 1;
	}
	//printf("hello2\n"); 
	while(j<n && j<=9223372036854775807)
	{
		j+=j;
		count++;
	}
	//printf("hello3\n"); 
	if(n!=1)
	{
		j=j/2;
		count--;
	}
	//printf("%llu\n",j);
	for(i=0;i<count;i++)
	{
		ans=(ans*ans)%MOD;
	}

	ans=(ans*power(n-j))%MOD;
	/*if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 2;
	}
	if(n%2==0)
	{
		ans=(power(n/2)*power(n/2))%MOD;
	}
	else    
	{
		ans=(power(n/2)*power(n/2)*2)%MOD;
	}*/
	return ans;
}

void precompute()
{
	int i;
	for(i=0;i<20;i++)
	{
		save[i]=power(pp(10,i));
	}
	
	/*for(i=0;i<20;i++)
	{
		printf("%llu ",save[i]);  
	}
	printf("\n");*/
}



int main()
{
	precompute();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ull n,p=0,tmp,i,ten=10,ans=1;
		scanf("%llu",&n);
		tmp=n;
		int a[20]={0};
		i=19;
		while(tmp>0)
		{
			a[i]=tmp%2;
			tmp=tmp/2;
			i--;
		}
		
		
		for(i=0;i<20;i++)
		{
			if(a[i]==1)
			{
				ans=(ans*save[19-i])%MOD;
			}
		}
		/*for(i=0;i<20;i++) 
		{
			printf("%llu",a[i]);     
		}*/
		//printf("\n");
		/*for(i=20;i>0;i--)
		{
			p+=(a[i-1]*pp(ten,20-i));
		}
		//printf("%llu\n",p);
		ans=power(p);*/
		ans=(ans*ans)%MOD;
		printf("%llu\n",ans);
	}
	return 0;
}
