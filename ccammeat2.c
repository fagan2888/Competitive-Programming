#include<stdio.h>

int main()
{
int t,i,j,n,k,a[777];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d%d",&n,&k);
if(n==1 && k==1)
{
printf("1\n");
continue;
}
if(k>(n/2))
{
printf("-1\n");
continue;
}
else
{
for(j=2;j<=(k*2);j+=2)
{
printf("%d ",j);
}
printf("\n");
}
}
return 0;
}
