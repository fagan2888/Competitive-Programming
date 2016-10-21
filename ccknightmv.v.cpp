#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
     int i,len,sum;
     char move[11];
     scanf("%s",move);
     
     len=strlen(move);
     if(len!=5)
     {
         printf("Error\n");
         continue;
     }
     
     if(move[2]!='-')
     {
         printf("Error\n");
         continue;
     }
     
     if(move[0]<'a' || move[0]>'h' || move[3]<'a' || move[3]>'h' || move[1]<'1' || move[1]>'8' || move[4]<'1' || move[4]>'8')    
     {
         printf("Error\n");
         continue;
     }
     
     if((move[0]==move[3]) || (move[1]==move[4]))
     {
          printf("No\n");
          continue;
     }
     
     sum = abs(move[3]-move[0]) + abs(move[4]-move[1]);                   
     
     if(sum==3)
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
     
      
