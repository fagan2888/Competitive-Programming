#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
   char s[1000001];
   long long int i,flag=0,j,len,count=0,n=1;
   scanf("%s",s);
   len=strlen(s); 
   
   /*if(len==1 && s[0]=='?')
   {
      printf("26\n");
      continue;
   }*/
   
   for(i=0,j=len-1;i<len/2;i++,j--)
   {
        if(s[j]=='?' && s[i]=='?')
        {
            n=(n*26)%10000009LL;
        }
        else if(s[i]=='?' || s[j]=='?')
        {;}
        else if(s[i]==s[j])
        {;}
        else
        {
            flag=1;
            break;
        }            
   }
   
   if(flag==1)
   printf("0\n");
   else
   {
       if(len%2!=0)
       if(s[len/2]=='?')
       n=(n*26)%10000009LL;
       
       printf("%lld\n",n);
   }
}
return 0;
}
