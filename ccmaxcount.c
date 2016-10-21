#include<stdio.h>
int main()
{
int t,n,i,count,num,pos;

scanf("%d",&t);
while(t--)
{
          count=0;
          int a[10000]={0};
          pos=0;
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
          scanf("%d",&num);
          a[num-1]++;
          }
          for(i=0;i<10000;i++)
          {
           if(count<a[i])
           {
           count=a[i];
           pos=i+1;
           }
          }
          printf("%d %d\n",pos,count);
}
return 0;
}
          
