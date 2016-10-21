#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],l,r;
int m[4],i,rmq=10000;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
if(i%3==0)
{
m[i/3]=a[i];
}
else
{
if(m[i/3]>a[i])
{
m[i/3]=a[i];
}
}
}
printf("\n%d %d %d %d",m[0],m[1],m[2],m[3]);

scanf("%d%d",&l,&r);
if(l%3==0 && (r+1)%3==0)
{
for(i=l/3;i<=((r+1)/3);i++)
{
if(rmq>m[i])
{rmq=m[i];}
}
printf("\nrmq =%d\n",rmq);
}
else
{

while(l%3!=0)
{
if(rmq>a[l])
{rmq=a[l];}
l++;
}
while(r%3!=0)
{
if(rmq>a[r])
{rmq=a[r];}
r--;
}
for(i=l/3;i<(r+1)/3;i++)
{
if(rmq>m[i])
{
rmq=m[i];
}
}
printf("\nrmq =%d\n",rmq);
}

getch();
return 0;

}
