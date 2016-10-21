#include<stdio.h>

int main()
{
	int t,count=0;
	scanf("%d",&t);
	while(t--)
	{
		int x[3],y[3],i;
		double m1,m2,m3;
		for(i=0;i<3;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		
		if((x[0]-x[1])!=0)
		{
			m1=(double)(y[0]-y[1])/(x[0]-x[1]);
		}
		else
		{
			m1=1000000.0;
		}
		
		if((x[1]-x[2])!=0)
		{
			m2=(double)(y[1]-y[2])/(x[1]-x[2]);
		}
		else
		{
			m2=1000000.0;
		}
		
		if((x[0]-x[2])!=0)
		{
			m3=(double)(y[0]-y[2])/(x[0]-x[2]);
		}
		else
		{
			m3=1000000.0;
		}
		
		if((m1*m2==-1) || (m3*m2==-1) || (m1*m3==-1) || (m1==0 && m2==1000000) || (m1==1000000 && m2==0) || (m2==0 && m3==1000000) || (m2==1000000 && m3==0) || (m1==0 && m3==1000000) || (m1==1000000 && m3==0))
		{
			count++;
		}
	}
	
	printf("%d\n",count);
	
	
return 0;
}
