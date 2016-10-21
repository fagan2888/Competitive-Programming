#include<stdio.h>
//#include<conio.h>
int main()
{
int i,n1,n2,n3,num;
int f[50000]={0};
scanf("%d%d%d",&n1,&n2,&n3);
int count=0;
 
//max=((n1>=n2?n1:n2)>=n3?(n1>=n2?n1:n2):n3);
//int a[max];
//int ans[max];
for(i=0;i<n1;i++)
{
scanf("%d",&num);
f[num-1]++;
}
 
for(i=0;i<n2;i++)
{
scanf("%d",&num);
f[num-1]++;
}
 
for(i=0;i<n3;i++)
{
scanf("%d",&num);
f[num-1]++;
}

for(i=0;i<50000;i++)
{
if(f[i]>1)
{
count++;
}
}
printf("%d\n",count);
for(i=0;i<50000;i++)
{
if(f[i]>1)
printf("%d\n",i+1);
}
//getch();
return 0;
}
