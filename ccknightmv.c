#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
getchar();
while(t--)
{
     int i=0,len,sum=0;
     char move[111],ch;
     gets(move);
     
     len=strlen(move);
        if(len==5 &&
        move[2]=='-' &&
        move[0]>='a' && move[0]<='h' && move[3]>='a' && move[3]<='h' && move[1]>='1' && move[1]<='8' && move[4]>='1' && move[4]<='8')               
        {
            if((abs(move[3]-move[0]) * abs(move[4]-move[1]))==2)
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
        else
        {
            printf("Error\n");
        }
}

return 0;
}
