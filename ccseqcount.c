#include<stdio.h>

int main()
{
	int n,d,k,i,sum=0,p,q,r,s,count=0;
	scanf("%d%d%d",&n,&k,&d);
	if(k==1)
	{
		if(n<=d)
		printf("1\n");
		else
		{
			printf("0\n");
		}
		return 0;
	}
	if(k>=5)
	{
		printf("0\n");
		return 0;
	}
	int a[k];
	for(i=0;i<k;i++)
	{
		a[i]=i+1;
		sum+=a[i];
	}
	
	if(sum>n)
	{
		printf("0\n");
		return 0;
	}
	
	if(sum==n)
	{
		printf("1\n");
		return 0;
	}
	
	if(k==2)
	{
		for(p=1;p<=d;p++)
		{
			for(q=p+1;(q<=p+d && q<=10);q++)
			{
				if((p+q)==n)
				{
					count++;
				}
			}
		}
	}
	if(k==3)
	{
		for(p=1;p<=d;p++)
		{
			for(q=p+1;(q<=p+d && q<=10);q++)
			{
				for(r=q+1;(r<=q+d && r<=10);r++)
				{
					if((p+q+r)==n)
					{
						count++;
					}
				}
			}
		}
	}
	printf("%d\n",count);
return 0;
}
