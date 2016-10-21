#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
getchar();
while(t--)
{
     int i=0,len,sum;
     char move[111];
     
     gets(move);
     
     len=strlen(move);
     if(len!=5)
     {
         printf("Error\n");
         //printf("1len=%d\n",len);
         continue;
     }
     
     if(move[2]!='-')
     {
         printf("Error\n");
         //printf("2len=%d\n",len);
         continue;
     }
     
     if(move[0]<'a' || move[0]>'h' || move[3]<'a' || move[3]>'h' || move[1]<'1' || move[1]>'8' || move[4]<'1' || move[4]>'8')    
     {
         printf("Error\n");
         //printf("3\n");
         continue;
     }
     
     sum = abs(move[3]-move[0]) * abs(move[4]-move[1]);                   
     
     if(sum==2)
     {
         printf("Yes\n");
         continue;
     }                    
     else
     {
         printf("No\n");
         continue;
     }
}
 
return 0;
} 
