#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{

int t;
scanf("%d",&t);
while(t--)
{
   char s[100][21],ch[101];       
   int tmp,n,i,count=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        cin>>s[i];
        cin>>ch[i];
   }
   
   for(i=n-1;i>=0;i--)
   {
      if(ch[i]=='+')
      count++;
      else if(ch[i]=='-')
      count--;
      else
      continue;
      tmp=i-1;
      while(tmp>=0)
      {
           if(strcmp(s[i],s[tmp])==0)
           {
               ch[tmp]='0';
           }
           tmp--;
      }
   }
   
   printf("%d\n",count);
}
return 0;
}                                                       
