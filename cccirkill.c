#include<stdio.h>
#include<math.h>

double c(double n,double r)
{

	double ans=1.0,s;
	s=n-r;
	if(s==0)
	s=1;
	while(n>1 && s>1 && r>1)
	{
		ans*=(n/(s*r));
		n--;r--;s--;
	}
	if(r==1 && s!=1)
	{
		while(n>1 && s>1)
		{	
			ans*=(n/s);
			n--;s--;
		}
	}
	else if(s==1 && r!=1)
	{
		while(n>1 && r>1)
		{	
			ans*=(n/r);
			n--;r--;
		}
	}
	if(r==1 && s==1)
	{
		while(n>1)
		{	
			ans*=n;
			n--;
		}
	}
return ans;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		int n,i,j,k,l;
		double no_of_ways,prob_of_each_event,cx,cy,r,m12,m23,ans,m13;
		scanf("%d",&n);
		double x[n],y[n];
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf",&x[i],&y[i]);
		}
		no_of_ways=c((double)n,3.0)*c((double)(n-3),1.0);
		//printf("no of ways =%lf \n",no_of_ways);
		prob_of_each_event=1/no_of_ways;
		//printf("prob of each event =%lf \n",prob_of_each_event);
		for(i=0;i<n-2;i++)
		{
			//printf("i=%d\n",i);
			for(j=i+1;j<n-1;j++)
			{	//printf("j=%d\n",j);
				if((x[i]-x[j])==0)
				m12=-10000;
				else
				m12=((y[i]-y[j])/(x[i]-x[j]));
				
				for(k=j+1;k<n;k++)
				{
					//printf("k=%d\n",k);
					if((x[j]-x[k])==0)
					m23=-10000;
					else
					m23=((y[j]-y[k])/(x[j]-x[k]));
					
					if((x[i]-x[k])==0)
					m13=-10000;
					else
					m13=((y[i]-y[k])/(x[i]-x[k]));
					
					//printf("m12=%lf\n m23=%lf\n m13=%lf\n",m12,m23,m13);
					
					if(m12==m23 || m13==m23 || m13==m12)
					{
						//printf(" x[i]=%f y[i]=%f\n x[j]=%f y[j]=%f\n x[j]=%f y[j]=%f\n",x[i],y[i],x[j],y[j],x[k],y[k]);
						continue;
					}
					else
					{
						if((m12==0 && m23==-10000) || (m12==-10000 && m23==0))
						{
							cx=(x[i]+x[k])/2;
							cy=(y[i]+y[k])/2;
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if((m13==0 && m23==-10000) || (m13==-10000 && m23==0))
						{
							cx=(x[i]+x[j])/2;
							cy=(y[i]+y[j])/2;
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if((m13==0 && m12==-10000) || (m13==-10000 && m12==0))
						{
							cx=(x[k]+x[j])/2;
							cy=(y[k]+y[j])/2;
							r=((cx-x[j])*(cx-x[j])) + ((cy-y[j])*(cy-y[j]));// radius of circle
						}
						else if(m12==0)
						{
							cx=(x[i]+x[j])/2;
							cy=((cx-x[k])*(cx-x[k])-(cx-x[i])*(cx-x[i]) -(y[i]*y[i] - y[k]*y[k]))/(2*(y[k]-y[i]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if(m12==-10000)
						{
							cy=(y[i]+y[j])/2;
							cx=((cy-y[k])*(cy-y[k])-(cy-y[i])*(cy-y[i]) -(x[i]*x[i] - x[k]*x[k]))/(2*(x[k]-x[i]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						
						else if(m23==0)
						{
							cx=(x[k]+x[j])/2;
							cy=((cx-x[j])*(cx-x[j])-(cx-x[i])*(cx-x[i]) -(y[i]*y[i] - y[j]*y[j]))/(2*(y[j]-y[i]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if(m23==-10000)
						{
							cy=(y[k]+y[j])/2;
							cx=((cy-y[j])*(cy-y[j])-(cy-y[i])*(cy-y[i]) -(x[i]*x[i] - x[j]*x[j]))/(2*(x[j]-x[i]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if(m13==0)
						{
							cx=(x[i]+x[k])/2;
							cy=((cx-x[k])*(cx-x[k])-(cx-x[j])*(cx-x[j]) -(y[j]*y[j] - y[k]*y[k]))/(2*(y[k]-y[j]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else if(m13==-10000)
						{
							cy=(y[i]+y[k])/2;
							cx=((cy-y[k])*(cy-y[k])-(cy-y[j])*(cy-y[j]) -(x[j]*x[j] - x[k]*x[k]))/(2*(x[k]-x[j]));
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						else
						{
						
							cx=((m12*m23*(y[k]-y[i]))+m12*(x[j]+x[k])-m23*(x[i]+x[j]))/(2*(m12-m23));//x coordinate of centre
							cy=((-1/m12)*(cx-((x[i]+x[j])/2))+((y[i]+y[j])/2));// y coordinate of centre
							r=((cx-x[i])*(cx-x[i])) + ((cy-y[i])*(cy-y[i]));// radius of circle
						}
						//printf("cx=%lf cy=%lf r=%lf\n",cx,cy,r);
						//printf(" x[i]=%f y[i]=%f\n x[j]=%f y[j]=%f\n x[j]=%f y[j]=%f\n",x[i],y[i],x[j],y[j],x[k],y[k]);
						for(l=0;l<n;l++)
						{
							if(l!=i && l!=j && l!=k)
							{
								
								//printf("circle = %lf\n rad = %lf\n",(((cx-x[l])*(cx-x[l])) + ((cy-y[l])*(cy-y[l]))),r);
								if(((((cx-x[l])*(cx-x[l])) + ((cy-y[l])*(cy-y[l])))-r)<0.000001)
								{
									//printf("cx=%lf cy=%lf r=%lf\n",cx,cy,r);
									count++;
									//printf("count2=%d\n",count);
									//printf(" x[i]=%f y[i]=%f\n x[j]=%f y[j]=%f\n x[j]=%f y[j]=%f\n x[l]=%f y[l]=%f\n",x[i],y[i],x[j],y[j],x[k],y[k],x[l],y[l]);
								}
							}
						}
						
					}
				}
			}
		}
		
		ans=prob_of_each_event*count;
		printf("%.8lf\n",ans);
	
	}
return 0;
}
