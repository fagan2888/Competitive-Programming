#include<stdio.h>
int main()
{
int a,b,c,tmp;
scanf("%d%d",&a,&b);
c=a-b;
tmp=c%10;
if(tmp==5)
{
c=((c/10)*10)+6;
}
else
{
c=((c/10)*10)+5;
}
printf("%d",c);
return 0;
}
