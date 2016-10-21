#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
long long int a,d;
int n,j,i,k,c[100]={0};
scanf("%lld%d%d",&a,&n,&k);
while(a>0)
{
i=0;
if(n==0)
{break;}

if(a<n)
{c[0]=a;
break;
}
else
{
a-=n;
c[i]=n;
if(a>0)
{
a--;;
c[i]=0;
i++;
c[i]++;
while(c[i]>n)
{
c[i]=0;
i++;
if(i<k)
{c[i]++;}
else
{break;}
}
}
}
}
for(j=0;j<k;j++)
{
printf("%d ",c[j]);
}
getch();
return 0;
}
