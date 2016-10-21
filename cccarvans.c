#include<stdio.h>
int main()
{
int i,t,n,speed,max;
scanf("%d",&t);
while(t--)
{
  int count=1,j;        
  scanf("%d",&n);
  scanf("%d",&max);
  for(j=1;j<n;j++)
  {
     scanf("%d",&speed);
     if(speed<max)
     {
         count++;
         max=speed;
     }         
  }
printf("%d\n",count);
}
return 0;
}
                  
