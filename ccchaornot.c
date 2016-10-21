#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int m,j,z,k,first,second,third,count,flag=0,ans=0;
long long int i,l;
scanf("%d",&m);
int b[m],subset[m];
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
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
printf("%d %d %d ",b[0],b[1],b[2]);
}
}
else
{
for(i=(pow(2,m)-1);i>=0;i--)
{
count=0;
for(j=0;j<m;j++)           //loop1
{
if((i&(1<<j))!=0)
{
subset[j]=b[j];
count++;
}
else
{
subset[j]=0;
}
}
for(j=0;j<m;j++)
{
printf("%d ",subset[j]);
}
printf("\n");                
flag=0;
if(count>=3)
{
ans=0;
for(l=(pow(2,count)-1);l>=0;l--)           //loop2
{
printf("l=%d\n",l);
flag=0;

for(k=0,j=0;k<m,j<count;k++)
{
if(subset[k]==0)
{continue;}
if((l&(1<<j))==0)
{
j++;
continue;
}

if(flag==0)
{
first=subset[k];
k++;
j++;
flag=1;
}

labela:
while(subset[k]==0)
{
if(k<m)
{
k++;
}
else
{break;}
}
if(k==m)
{break;}

if((l&(1<<j))==0)
{
j++;
k++;
goto labela;
}
if(k==m)
{break;}
second=subset[k];
j++;
z=k+1;
while(z<m)
{
labelb:
while(subset[z]==0)
{
if(z<m)
{
z++;
}
else
{break;}
}
if(z==m)
{break;}

if((l&(1<<j))==0)
{
j++;
z++;
goto labelb;
}


third=subset[z];
j++;
if((first+third)==(2*second))
{
ans=1;
goto label;
}
z++;
}
}
}
}
label:
if(ans==0)
{
printf("%d\n",count);
for(j=0;j<m;j++)
{
if(subset[j]!=0)
{printf("%d ",subset[j]);}
}
printf("\n");
break;
}
}
}
getch();
return 0;
}


