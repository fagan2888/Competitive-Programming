#include<stdio.h>
#include<math.h>

int main()
{
	int t,i;
	float x[4],y[4];
	float d[4];
	float m1,m2,m3,m4;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<4;i++)
		{
			scanf("%f%f",&x[i],&y[i]);
		}
		
		d[0]=(pow(x[1]-x[0],2)+pow(y[1]-y[0],2));
		d[1]=(pow(x[2]-x[1],2)+pow(y[2]-y[1],2));
		d[2]=(pow(x[3]-x[2],2)+pow(y[3]-y[2],2));
		d[3]=(pow(x[0]-x[3],2)+pow(y[0]-y[3],2));
		
		if(x[1]-x[0]!=0)
		{
			m1=(y[1]-y[0])/(x[1]-x[0]);
		}
		else
		{
			m1=100000;
		}
		
		if(x[2]-x[1]!=0)
		{
			m2=(y[2]-y[1])/(x[2]-x[1]);
		}
		else
		{
			m2=100000;
		}
		
		if(x[3]-x[2]!=0)
		{
			m3=(y[3]-y[2])/(x[3]-x[2]);
		}
		else
		{
			m3=100000;
		}
		
		if(x[0]-x[3]!=0)
		{
			m4=(y[0]-y[3])/(x[0]-x[3]);
		}
		else
		{
			m4=100000;
		}
		
		if((fabs(m1-m2)<0.000001) ||(fabs(m2-m3)<0.000001) || (fabs(m3-m4)<0.000001) || (fabs(m4-m1)<0.000001) || (fabs(m1-m3)<0.000001) ||(fabs(m2-m4)<0.000001))
		{
			printf("NONE\n");
		}
		else if(d[0]==d[1] && d[1]==d[2] && d[2]==d[3] &&d[3]==d[1])
		{
			if(m1*m2==-1 || (m1==0 && m2==100000) || (m1==100000 && m2==0))
			{
				printf("SQUARE\n");
			}
			else
			{
				printf("RHOMBUS\n");
			}
		}
		else if((d[0]==d[2] && d[1]==d[3]))
		{
			if(m1*m4==-1 || (m1==0 && m4==100000) || (m1==100000 && m4==0))
			{
				printf("RECTANGLE\n");
			}
			else
			{
				printf("PARALLELOGRAM\n");
			}
		}
		
		else
		{
			printf("QUADRILATERAL\n");
		}
	}
return 0;
}
