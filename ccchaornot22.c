#include<stdio.h>
//#include<math.h>
#include<conio.h>
int main()
{
int m,j,z,k,first,second,fix,count=0,flag=0;
int i,l;
scanf("%d",&m);

int b[m],ans[m];
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
ans[j]=0;
}
if(m>15)
{m=15;}
if(m<3)
{
printf("0");
}
else if(m==3)
{
if((b[1]-b[0])==(b[2]-b[1]))
{
printf("0");
}
else
{
printf("3\n");
printf("%d %d %d ",b[0],b[1],b[2]);
}
}
else
{
ans[0]=b[0];
ans[1]=b[1];
count=2;
for(j=2;j<m;j++)
{
flag=0;
if(count<3)
{
if((b[j]-ans[1])!=(ans[1]-ans[0]))
{
ans[j]=b[j];
count++;
continue;
}
else
{continue;}
}
else
{
if((b[j]-ans[1])!=(ans[1]-ans[0]))
{
fix=b[j];

for(i=0;i<j;)
{
if(ans[i]!=0)
{first=ans[i];
i++;}
else
{i++;
continue;}
z=i;
while(z<j)
{
while(ans[z]==0 && z<j)
{z++;}
second=ans[z];
if((fix+first)==(2*second))
{
flag=1;
break;
}
z++;
}
if(flag==1)
{break;}
}
}
}
if(flag==0)
{
ans[j]=fix;
count++;
}
}
if(count<3)
{
printf("0\n");
}
else
{
printf("%d\n",count);
for(j=0;j<m;j++)
{
if(ans[j]!=0)
printf("%d ",ans[j]);
}
}
}
getch();
return 0;
}
