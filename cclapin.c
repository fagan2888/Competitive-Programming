#include<stdio.h>
#include<string.h>
int main()
{
int flag,j,t,i,len,h;
char s[1001];
scanf("%d",&t);
for(i=0;i<t;i++)
{
flag=0;
int a[26]={0},b[26]={0};
fflush(stdin);
scanf("%s",s);
len=strlen(s);
h=len/2;
for(j=0;j<h;j++)
{
a[s[j]-97]++;
}
if(len%2!=0)
{h++;}
for(j=h;j<len;j++)
{
b[s[j]-97]++;
}

for(j=0;j<26;j++)
{
if(a[j]!=b[j])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
return 0;
}
