#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
          int i,n;
          long int num,min1,min2;
          scanf("%d",&n);
          min1=1000000000;min2=1000000000;
          for(i=0;i<n;i++)
          {
              scanf("%ld",&num);
              if(i==0)
              {min1=num;}
              else if(i==1)
              {
                   if(min1>num)
                   {min2=min1;
                   min1=num;}
                   else
                   min2=num;
              }
              else
              {
                   if(num>min1 && num>min2)
                   continue;
                   else if(num>=min1 && num<=min2)
                   {
                        min2=num;
                   }
                   else if(num<min1 && num<min2)
                   {
                        min2=min1;
                        min1=num;
                   }
              }
          }
          //printf("min1=%ld\nmin2=%ld\n",min1,min2);
          printf("%ld\n",min2-min1);
    }
return 0;
}
                              
