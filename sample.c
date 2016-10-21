#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l,t,a;
scanf("%d",&t);
while(t--)
{
          int n;
          long long int min=0,max=0,num1=0,flag=0,num2=0,counter=0,num3=0;
          scanf("%d",&n);
          long int d[n];
          for(a=0;a<n;a++)
          {
                          scanf("%ld",&d[a]);
                          if(d[a]<0)
                          {flag=1;}
          }
          if(flag==0)
          {
                     for(a=0;a<n;a++)
                     {max+=d[a];}
                     
                     if(d[0]<=d[n-1])
                     max=max-d[0]-d[0];
                     else
                     max=max-d[n-1]-d[n-1];
          }
          if(flag==1)
          {
          long long int sum[n];
          sum[0]=d[0];
          max=0;
          min=0;
          //if(d[0]>0)
          //max=sum[0];
          //else
          //min=sum[0];
          for(i=1;i<n;i++)
          {
                          sum[i]=sum[i-1]+d[i];
                          
                          
                          if(sum[i]<sum[i-1])
                          {
                                             if(min>fabs(sum[i]-sum[i-1]))
                                             min+=sum[i];
                          }
                          if(sum[i]>sum[i-1])
                          {
                                             if(max<fabs(sum[i]-sum[i-1]))
                                             max+=fabs(sum[i]-sum[i-1]);
                          }
          }                   
          }
printf("%lld\n",max);
}
return 0;
}
                     
