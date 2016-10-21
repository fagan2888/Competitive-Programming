#include<stdio.h>

int main()
{
int t,i,j,n,k,min,count;
int a[30],b[30],temp;//c[101]={0},r[101]={0};
scanf("%d",&t);
for(i=0;i<t;i++)
{
count=0;
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
//c[a]++;
}
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
//r[b]++;
}  

for(j=0;j<n;j++)
{
min=j;
for(k=j+1;k<n;k++)
{
if(a[min]>a[k])
{
min=k; 
}
}
temp=a[min];
a[min]=a[j];
a[j]=temp;
}

for(j=0;j<n;j++)
{
min=j;
for(k=j+1;k<n;k++)
{
if(b[min]>b[k])
{
min=k; 
}
}
temp=b[min];
b[min]=b[j];
b[j]=temp;
}

for(j=0,k=0;k<n;)
{
if(a[j]<=b[k])
{
j++;k++;count++;
}
if(a[j]>b[k])
{
k++;
}
}
/*for(j=1;j<=100;j++)
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
if(r[k]==0)
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
}*/
printf("%d\n",count);
}
return 0;
}

   
