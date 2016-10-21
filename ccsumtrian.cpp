#include<stdio.h>
using namespace std;

int main()
{
int t,i,j,k,n,a[100][100],in[100][100],max;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&n);
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
if(i<j)
{
a[j][k]=0;
}
else
{
scanf("%d",&in[j][k]);
}
}
}

a[0][0]=in[0][0];
for(k=0;k<n;k++)
{
for(j=k;j<n;j++)
{
if(j==0 && k==0)
{
continue;
}
                

if(j-1>=k &&k-1>=0)
{
         a[j][k]=a[j-1][k]>a[j-1][k-1]?(a[j-1][k]+in[j][k]):(a[j-1][k-1]+in[j][k]);
}

else if(j-1<k && k-1>=0)
{
     a[j][k]=a[j-1][k-1]+in[j][k];
}
else if(j-1>=k && k-1<0)
{
     a[j][k]=a[j-1][k]+in[j][k];
}
}
}
         
max=a[n-1][0];
for(k=1;k<n;k++)
{
if(max<a[n-1][k])
{
max=a[j][k];
}
}

printf("%d\n",max);
}
return 0;
}                                                    
                                                                      
    
