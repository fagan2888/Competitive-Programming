#include<stdio.h>

int main()
{
int t,i;
scanf("%d",&t);
while(t--)
{
      int tmp,n,x,sum=0,sweets,flag=0;
      scanf("%d%d",&n,&x);
      int a[n];
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
            sum+=a[i];
      }            
      
      sweets=sum/x;
      
      for(i=0;i<n;i++)
      {
            if(((sum-a[i])/x)==sweets)
            {
                  flag=1;
                  break;
            }
      }
      
      if(flag==1)
      printf("-1\n");
      else
      printf("%d\n",sweets);
}                                
return 0;
}        
