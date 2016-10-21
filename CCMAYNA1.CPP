#include<stdio.h>
#include<iostream>
using namespace std;
//#include<conio.h>
#include<string.h>

#define RANGE 40001
int main()
{
//clrscr();
int i,j,t,n,flag=0;
char a[40001],b[40001],*ch,*pt;

scanf("%d",&t);
fflush(stdin);
for(i=0;i<t;i++)
{
int cld[26]={0},par[26]={0};
flag=0;
cin>>a;
cin>>b;

for(pt=a;*pt!='\0';pt++)
{
par[*pt-97]++;
}
for(pt=b;*pt!='\0';pt++)
{
par[*pt-97]++;
}

scanf("%d",&n);
char *child;
for(j=0;j<n;j++)
{
fflush(stdin);
child=new char[RANGE];
scanf("%s",child);
for(ch=child;*ch!=0;ch++)
{
cld[*ch-97]++;                       //frequencies of character for children
}
delete child;
}

for(j=0;j<26;j++)
{
if(par[j]<cld[j])            //if particular alphabhet has less frequency in parent than child 
{                            //then it is not possible
flag=1;
break;
}
}

if(flag==1)
{
printf("NO\n");
}
else
{
printf("YES\n");
}
}

//getch();
return 0;
}
