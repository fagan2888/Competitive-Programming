#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
int t,len1,len2,count=0;
char m[25001],w[25001],*c1,*c2;

scanf("%d",&t);
fflush(stdin);
while(t--)
{
count=0;
cin>>m;
cin>>w;
len1=strlen(m);
len2=strlen(w);

if(len1<len2)
{
             count=0;
for(c1=m,c2=w;*c1!='\0';)
{
if(*c1==*c2)
{
c1++;
c2++;
count++;
}
else
{if(*c2=='\0')
break;
c2++;
}
}
if(count==len1)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
else
{
    count=0;
for(c1=m,c2=w;*c2!='\0';)
{
if(*c1==*c2)
{
c1++;
c2++;
count++;
}
else
{
if(*c1=='\0')
break;
c1++;
}
}
if(count==len2)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
}

return 0;
}










