#include<stdio.h>
#include<math.h>
int main()
{
int i,t,n,a,b;
scanf("%d",&t);
while(t--)
{
int count=0;
long long int ans=0;
scanf("%d%d%d",&n,&a,&b);
for(i=0;i<n;i++)
{
if((a&(1<<i))!=0)
{
count++;
}
if((b&(1<<i))!=0)
{
count++;
}
}
if(count<n)
{
for(i=n-1;i>=n-count;i--)
{
ans+=pow(2,i);
}
}
else if(count==n)
{
for(i=n-1;i>=0;i--)
{
ans+=pow(2,i);
}
}    
else
{        
count-=n;
for(i=n-1;i>=count;i--)
{
ans+=pow(2,i);
}
}
printf("%lld\n",ans);
}
return 0;
}
