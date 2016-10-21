#include<stdio.h>

int main()
{
	int t,count=0;
	scanf("%d",&t);
	while(t--)
	{
		int x[3],y[3];
		float m1,m2,m3;
		int i;
		for(i=0;i<3;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		
	
			m1=(y[0]-y[1])/(x[0]-x[1]);
		
			m2=(y[1]-y[2])/(x[1]-x[2]);
		
			m3=(y[0]-y[2])/(x[0]-x[2]);
		
		if((m1*m2==-1) || (m3*m2==-1) || (m1*m3==-1) 	)	
		{
			count++;
		}
	}
	
	printf("%d\n",count);
	
	
return 0;
}
