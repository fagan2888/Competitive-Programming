#include<stdio.h>

int main()
{
int t,i,j,n,k,count;
int a,b,c[101]={0},r[101]={0};
scanf("%d",&t);
for(i=0;i<t;i++)
{
count=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a);
c[a]++;
}
for(j=0;j<n;j++)
{
scanf("%d",&b);
r[b]++;
}   

for(j=1;j<=100;j++)
{
if(c[j]==0)
{continue;}
else
{
while(c[j]>0)
{
k=j;
while(r[k]==0 && k<=100)
{k++;}
if(k==101)
{
break;
}
c[j]--;
r[k]--;
count++;
}
}
if(k==100)
{break;}
}
printf("%d\n",count);
}
return 0;
}

   
