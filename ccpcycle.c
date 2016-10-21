#include<stdio.h>
//#include<conio.h>
int main()
{
int n,j,i,tmp,flag=0,first=0,count=0;
scanf("%d",&n);
int a[n],f[1000]={0};
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
f[i]=0;
}

for(i=0;i<n;i++)
{
if(f[i]==0)
{
count++;
tmp=i;
do
{
f[tmp]=count;
tmp=a[tmp]-1;
}while(f[tmp]!=count);
}
}
printf("%d\n",count);

for(i=0;i<count;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(f[j]==i+1)
{             
if(flag==0)
{
first=j+1;
flag=1;
}
printf("%d ",j+1);
}
}
printf("%d\n",first);
}
//getch();
return 0;
}
