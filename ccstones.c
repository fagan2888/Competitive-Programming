#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
   char j[101],s[101];
   int i,k,lenj,lens,count=0;
   scanf("%s",j);
   scanf("%s",s);
   lenj=strlen(j);
   lens=strlen(s);
   
   for(i=0;i<lenj;i++)
   {    
       if(j[i]=='0')
       continue;
                   
       for(k=0;k<lens;k++)
       {
            if(j[i]==s[k])
            {
                count++;
            }
       }
       for(k=i+1;k<lenj;k++)
       {
            if(j[i]==j[k])
            j[k]='0';
       }              
                          
   }
   
   printf("%d\n",count);
}
return 0;
}
                                             
             
