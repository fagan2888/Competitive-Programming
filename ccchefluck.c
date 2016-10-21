#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
long int i,n,rem;
int flag=0;
scanf("%ld",&n);
if(n%7==0)
{
printf("%ld\n",n);
continue;
}
for(i=n;i>=0;i--)
{
   if(i%7==0 && (n-i)%4==0)
   {
         printf("%ld\n",i);
         flag=1;
         break;
   }
}
if(flag==1)
continue;   
       
printf("-1\n");
}
//getch();
return 0;
}
