#include<stdio.h>
int main()
{
int t,j,i,n,a[50],tmp,num1,num2;
scanf("%d",&t);
for(i=0;i<t;i++)
{
int gcd[49],min=0;
for(j=0;j<49;j++)
{
gcd[j]=1;
}
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}

num1=a[0];

for(j=1;j<n;j++)
{
num2=a[j];
if(num1<=num2)
{
if(num2%num1==0)
{
gcd[j-1]=num1;
continue;
}
else
{
while(num2%num1!=0)
{
tmp=num1;
num1=num2%num1;
num2=tmp;
}
gcd[j-1]=num1;
}
}

if(num2<num1)
{
if(num1%num2==0)
{
gcd[j-1]=num2;
continue;;
}
else
{
while(num1%num2!=0)
{
tmp=num2;
num2=num1%num2;
num1=tmp;
}
gcd[j-1]=num2;
}
}
}
min=gcd[0];
for(j=1;j<n-1;j++)
{
if(min>gcd[j])
{
min=gcd[j];
}
}
for(j=0;j<n;j++)
{
printf("%d ",a[j]/min);
}
printf("\n");
}
return 0;
}
