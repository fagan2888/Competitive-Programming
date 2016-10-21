#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int u,n,m,c,i,pos=0;
		double r,d,default_cost,tmp_min=10000000.0;
		scanf("%lf%ld%ld",&d,&u,&n);
		default_cost=d*u;
		for(i=0;i<n;i++)
		{
			scanf("%ld%lf%ld",&m,&r,&c);
			if((m*r*u+c)<(m*default_cost))
			{
				if(m*tmp_min>(m*r*u+c))
				{
					tmp_min=((m*r*u+c)/m);
					pos=i+1;
				}
			}
		}
		printf("%ld\n",pos);
	}
return 0;
}
