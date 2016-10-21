#include<stdio.h>
int main()
{
int j,t,n,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int a[n],b[n],max=0,count=1,pos,tmp;
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
   scanf("%d",&b[i]);
}

for(i=0;i<n;i++)
{
   pos=i;
   for(j=i+1;j<n;j++)
   {
      if(a[pos]>a[j])
      {
         pos=j;
      }
   }
   tmp=a[i];
   a[i]=a[pos];
   a[pos]=tmp;
            
   tmp=b[i];
   b[i]=b[pos];
   b[pos]=tmp;
}

for(i=0;i<n;i++)
{
   printf("%d ",a[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
   printf("%d ",b[i]);
}
printf("\n");

max=1;count=1;         
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;)
{
pos=i;
count=1;
if(b[pos]>a[j])
while(b[pos]>a[j])
{
count++;
pos=j;
j++;
}             
else
{break;}
if(max<count)
{max=count;}
}
}
printf("%d\n",max);
}
return 0;
}
