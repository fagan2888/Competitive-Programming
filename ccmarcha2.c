#include<stdio.h>
#include<math.h>
int main()
{
int t,l,num,i,sum,flag1,flag2;

scanf("%d",&t);

while(t--)
{
          sum=0;flag1=0;flag2=0;
          scanf("%d",&l);
          for(i=0;i<l;i++)
          {
               scanf("%d",&num);
               if(i==0)
               {
               if(l==1 && num==0)
               {
                   flag2=1;
               }
               else if(l>=2 && num!=0)
               {
                   flag2=1;
               }
               }
               
               
               if(flag2==0)
               {
               
               if(num>=pow(2,i) && i!=l-1)
               {
                   flag2=1;
               }    
               if(i!=l-1)            
               {sum+=pow(2,(l-1-i))*num;}
               
               }
               
          }    
         
if((pow(2,l-1)-sum)!=num)
{
flag2=1;
}
    

if(flag2==0)
printf("YES\n");
else
printf("NO\n");

}
return 0;
}                  
