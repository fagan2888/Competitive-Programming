#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1001];
    int i,e,st,j,len,num1,num2,start,end,tmp,size=-1,count=0;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;)
    {
         if(s[i]==48)
         {
                    i++;
                    continue;
         }          
         if(s[i-1]>=48 && s[i-1]<=57 && (i-1)>=0)
         {
          i--;          
         while((i-1)>=0 && s[i-1]>=48 && s[i-1]<=57)
         {
            i--;
         }    
         }
         start=i;end=i;         
         if(s[i]>=65 && s[i]<=90)
         {
              count++;
              end=i;
              i++;
         }          
         while(s[i]>=48 && s[i]<=57 && i<len)
         {
              end=i;
              i++;
         }
         
         if(count==0)
         {
              if(s[i]>=65 && s[i]<=90)                          
              {
              count++;
              end=i;
              i++;        
              }
              while(s[i]>=48 && s[i]<=57)
              {
              end=i;
              i++;
              }
         }
              
         tmp=end-start;
         while(s[start]==48)
         {tmp--;
         start++;
         }   
         if(tmp>size)
         {size=tmp;
         e=end;
         st=start;
         }     
         if(tmp==size && tmp!=0)
         {
             num1=1;num2=1;         
             for(j=start;j<=end;j++)
             {
                   if(s[j]>=65 && s[j]<=90)
                   {
                               num1+=pow(10,end-j)*9;
                               continue;
                   }
                   else
                   {
                       num1+=pow(10,end-j)*(s[j]-48);
                   }
             }     
             for(j=st;j<=e;j++)
             {
                   if(s[j]>=65 && s[j]<=90)
                   {
                               num2+=pow(10,e-j)*9;
                               continue;
                   }
                   else
                   {
                       num2+=pow(10,e-j)*(s[j]-48);
                   }
             }          
             //printf("num1=%d\nnum2=%d\n",num1,num2);
             if(num1>=num2)
             {
                  st=start;
                  e=end;
             }
         }                  
                       
                                                 
         count=0;     
    }
if(size==-1)
{
printf("0");
}
else
{
for(i=st;i<=e;i++)
{
if(s[i]>=48 && s[i]<=57)
{
   printf("%c",s[i]);
}
else
{
    printf("9");
}
}
}
//printf("\n");
//getch();
return 0;
}
