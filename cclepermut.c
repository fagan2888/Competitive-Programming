#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);

while(t--)
{
   int i,j,n,inversion=0,local_inversion=0;
   scanf("%d",&n);
   int a[n];
   
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   }
   
   for(i=0;i<n-1;i++)
   {

        for(j=i+1;j<n;j++)
        {
               if(a[i]>a[j])
               inversion++;
        }
        
        if(a[i]>a[i+1])
        local_inversion++;                      
   }
   
   if(inversion==local_inversion)
   printf("YES\n");
   else
   printf("NO\n");
   
}
return 0;
}                
