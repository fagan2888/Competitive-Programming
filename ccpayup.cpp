#include<stdio.h>
using namespace std;
#include<math.h>
//#include<conio.h>
int main()
{
int t,num,flag=0,i,n,m,sum,set;
int j,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
sum=0;
flag=0;
scanf("%d%d",&n,&m);
int *value=new int[n];
for(j=0;j<n;j++)
{
scanf("%d",&value[j]);
}

for(j=0;j<pow(2,n);j++)
{
sum=0;
for(k=0;k<n;k++)
{
if((j&(1<<k))!=0)
{
sum+=value[k];
}
if(sum==m)
{
flag=1;
break;
}
if(sum>m)
{break;}
}
}

if(flag==1)
{
printf("YES\n");
}
else
{
printf("NO\n");
}

}

//getch();
return 0;
}

