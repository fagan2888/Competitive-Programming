#include<stdio.h>
int main()
{
int t,p,count;
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%d",&p);

          while(p>=2048)
          {
                     p-=2048;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=1024)
          {
                     p-=1024;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=512)
          {
                     p-=512;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=256)
          {
                     p-=256;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=128)
          {
                     p-=128;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=64)
          {
                     p-=64;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=32)
          {
                     p-=32;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=16)
          {
                     p-=16;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=8)
          {
                     p-=8;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=4)
          {
                     p-=4;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=2)
          {
                     p-=2;
                     count++;
                     if(p==0)
                     goto label;
          }
          if(p>=1)
          {
                     p-=1;
                     count++;
                     if(p==0)
                     goto label;
          }

label:
printf("%d\n",count);
}
return 0;
}
