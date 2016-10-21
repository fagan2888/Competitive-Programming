#include<stdio.h>
#include<math.h> 
int main()
{
	int t,count=0;
	scanf("%d",&t);
	while(t--)
	{
		int x[3],y[3],i,d1,d2,d3;

		for(i=0;i<3;i++)
		{
			scanf("%d%d",&x[i],&y[i]);
		}
		
		d1=pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2);
		d2=pow((x[2]-x[1]),2)+pow((y[2]-y[1]),2);
		d3=pow((x[0]-x[2]),2)+pow((y[0]-y[2]),2);
		
		if((d1==(d2+d3)) || (d2==(d1+d3)) || (d3==(d1+d2)) )
		{
			count++;
		}
	}
	
	printf("%d\n",count);
	
	
return 0;
}
