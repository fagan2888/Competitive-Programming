#include<stdio.h>
int main()
{
long int i,t,n,c,a;
scanf("%ld",&t);
while(t--)
{
   long int sum=0;       
   scanf("%ld%ld",&n,&c);       
   for(i=0;i<n;i++)
   {
         scanf("%ld",&a);
         sum+=a;
   }
   if(sum<=c)
   {    
        printf("Yes\n");
   }
   else
   {
       printf("No\n");
   }

}
return 0;
}         
