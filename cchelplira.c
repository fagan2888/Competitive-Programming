#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,x[3],y[3],j,min,max;
	double area,areamin,areamax;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%lld%lld",&x[j],&y[j]);
		}
		area=(double)((x[0]*(y[1]-y[2]))+(x[1]*(y[2]-y[0]))+(x[2]*(y[0]-y[1])));
		area=fabs(area/2);
		//printf("%lf\n",area);
		if(i==0)
		{
			areamin=area;
			areamax=area;
			min=i+1;
			max=i+1;
		}
		else
		{
			if(area>=areamax)
			{
				areamax=area;
				max=i+1;
			}
			if(area<=areamin)
			{
				areamin=area;
				min=i+1;
			}
		}
		
	}
	printf("%lld %lld\n",min,max);
return 0;
}
