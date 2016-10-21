#include<stdio.h>
#include<math.h>
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
int main()
{
int i,t;
scanf("%d",&t);
while(t--)
{
          int n;
          long long int ans=0;
          long long int d[10004],left[10004][2],right[10004][2];
          scanf("%d",&n);
          
          for(i=0;i<n;i++)
          {
                          scanf("%lld",&d[i]);
          }
          
          left[0][0]=d[0];                   // 0th index for minimum
           left[0][1]=d[0];                  // 1st index for maximum
          
          for(i=1;i<n;i++)
          {
             left[i][0] = min(left[i-1][0],0) + d[i];
             left[i][1] = max(left[i-1][1],0) + d[i];
          } 
          
          right[n-1][0]=d[n-1];                   // 0th index for minimum
          right[n-1][1]=d[n-1];                  // 1st index for maximum
          
          for(i=n-2;i>=0;i--)
          {
             right[i][0] = min(right[i+1][0],0) + d[i];
             right[i][1] = max(right[i+1][1],0) + d[i];
          }
          
          for(i=0;i<n-1;i++)
          {
                ans=max(ans,abs(left[i][0]-right[i+1][1]));
                ans=max(ans,abs(left[i][1]-right[i+1][0]));          
          }
          
          printf("%lld\n",ans);
}
return 0;
}
