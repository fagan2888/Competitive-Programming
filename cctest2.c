#include<stdio.h>

int main()
{
int n,a[101],b[101],i,j,t,max=0,count;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
for(i=1;i<=n;i++)
       scanf("%d",&b[i]);
max=0;
for(i=1;i<=n;i++)
{                count=1;
       for(j=1;j<=n;j++)
       {
                        if(i==j)
                                continue;
                        else
                        {
                            if((b[i]-a[j])>0&&(b[i]-b[j])<=0)
                                   count++;
                        }
                        
       }
       if(max<count)
                                     max=count;
}
printf("%d\n",max);
}
return 0;
}
