#include<stdio.h>
#include<string.h>
int main()
{
long int t,len;
char s[1000002];
scanf("%d",&t);
while(t--)
{
        long int i;
        int max=0,curr=0,count=0;  
        scanf("%s",s);
        len=strlen(s);
        for(i=0;i<len;i++)
        {
             if(s[i]=='#')
             continue;
             else
             {
             while(s[i]=='.')
             {
                  curr++;
                  i++;
             }
             if(max<curr)
             {
             max=curr;
             count++;
             }
             curr=0;
             }      
        }
        printf("%d\n",count);
}                   
getch();
return 0;
} 
