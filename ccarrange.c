#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
   int k,i,len,index=0,j;
   scanf("%d",&k);
   len=pow(2,k);
   char s[len+1],final[len+1];
   scanf("%s",s);
   for(i=0;i<len;i++)
   {
       index=0;              
       if(i==0 || i==len-1)
       {              
            final[i]=s[i];
       }          
       else
       {
            for(j=0;j<k;j++)
            {
                 if((i&(1<<j))!=0)
                 {
                      index+=pow(2,k-1-j);
                 }
            }
            
            final[index]=s[i];
       }
   }
   
   for(i=0;i<len;i++)
   {
        printf("%c",final[i]);
   }
   printf("\n");             
}
return 0;
}                       
   
   
          
