#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l,t,a;
scanf("%d",&t);
while(t--)
{
          int n;
          long long int max=0,num1=0,num2=0,loop=0,sum1=0,sum2=0,z,counter=0,num3=0;
          scanf("%d",&n);
          long int d[n];
          for(a=0;a<n;a++)
          {
                          scanf("%ld",&d[a]);
          }
          
          for(i=0;i<n;i++)
          {
                          num1=0;
                          loop=0;
                          sum1=0;sum2=0;
                          for(j=i;j<n;j++)
                          {
                                            num1+=d[j];
                                            if(i!=0 && i!=n-1)
                                            {
                                                    for(z=0;z<i;z++)
                                                    {sum1+=d[z];}
                                                    for(z=j+1;z<n;z++)
                                                    {sum2+=d[z];}
                                                    if(sum1<=sum2)
                                                    {
                                                                 loop=1;
                                                    }
                                                    else
                                                    {loop=2;}
                                            }
                                            if(i==0)
                                            {loop=2;}
                                            if(i==n-1)
                                            {
                                                      loop=1;
                                            }
                                            //printf("num1=%lld\n",num1);
                                            if(loop=1)
                                            {
                                            for(k=0;k<i;k++)
                                            {
                                                            num2=0;
                                                            for(l=k;l<i;l++)
                                                            {
                                                                            num2+=d[l];
                                                                            
                                                                            //printf("num2=%lld\n",num2);
                                                                            if(fabs(num1-num2)>max)
                                                                            {
                                                                                                   max=fabs(num1-num2);
                                                                            }
                                                            }
                                            }
                                            }
                                            if(loop=2)
                                            {
                                            for(k=j+1;k<n;k++)
                                            {
                                                            
                                                            for(l=k;l<n;l++)
                                                            {
                                                                            num3+=d[l];
                                                                            //printf("num3=%lld\n",num3);
                                                                            if(fabs(num1-num3)>max)
                                                                            {
                                                                                                   max=fabs(num1-num3);
                                                                            }
                                                                            
                                                            }
                                            }
                                            }
                          }
          }
          printf("%lld\n",max);
}
return 0;
}                                                                         
                                            
