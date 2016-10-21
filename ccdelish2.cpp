#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
int i,j,t,n,flag,pos;
long long int d[10000],max,min,sum[2]={0};
scanf("%d",&t);
for(i=0;i<t;i++)
{
flag=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%lld",&d[j]);
if(j==0)
{pos=0;}
else if(d[pos]>=d[j])
{pos=j;}
if(d[j]<0)
{
flag=1;
}
}

if(flag==0)
{
min=d[pos];
for(j=0;j<pos;j++)
{
sum[0]+=d[j];
}
for(j=pos+1;j<n;j++)
{
sum[1]+=d[j];
}
if(sum[0]<sum[1])
{max=sum[1];}
else
{max=sum[0];}
}

printf("%lld",max-min);
}
return 0;
}
