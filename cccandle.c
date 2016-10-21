#include<stdio.h>

int main()
{
int j,t,a[10],min,i,pos=10;
scanf("%d",&t);
for(i=0;i<t;i++)
{
pos=10;
min=10;
for(j=0;j<10;j++)
{
scanf("%d",&a[j]);
if(a[j]==0)
{
if(pos>j)
{pos=j;}
}
}


if(pos!=10 && pos!=0)
{
printf("%d\n",pos);
continue;
}

if(pos==0)
{
j=1;
if(a[j]==0)
{
printf("1\n");
continue;
}
else
{
j++;
while(a[j]!=0 && j<10)
{j++;}
if(j!=10)
{
printf("%d\n",j);
continue;
}
if(j==10)
{
printf("1%d\n",pos);
continue;;
}
}
}

min=a[0]+1;
pos=0;
for(j=1;j<10;j++)
{
if(min>a[j])
{
min=a[j];
pos=j;
}
}
if(pos==0)
{
printf("1");
while(min>0)
{
printf("%d",pos);
min--;
}
printf("\n");
}
else
{
while((min+1)>0)
{
printf("%d",pos);
min--;
}
printf("\n");
}
}
return 0;
}




