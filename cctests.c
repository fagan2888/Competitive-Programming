#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,r1,r2,i,count=0,sq,r,flag=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i<=b;i++)
		{
			r1=sqrt(i);
			if(r1*r1==i)
			{
				a=i;
				break;
			}
		}
		for(i=b;i>=a;i--)
		{
			r2=sqrt(i);
			if(r2*r2==i)
			{
				b=i;
				break;
			}
		}
		r1=sqrt(a);
		r2=sqrt(b);
		for(i=r1;i<=r2;i++)
		{
			flag=0;
			if(i%10==4 || i%10==5 ||i%10==6)
			{
				continue;
			}
			else
			{
				sq=i*i;
				while(sq>0)
				{
					r=sq%10;
					if(!(r==0 || r==1 || r==4 || r==9))
					{
						flag=1;
						break;
					}
					sq=sq/10;
				}
				if(flag==0)
				{
					count++;
				printf("%lld %lld\n",i,i*i);
				}
			}
		}
		
		printf("%lld\n",count);
		
	}
return 0;
} 
