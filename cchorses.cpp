#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
     int n,i;
     long int mindiff;
     scanf("%d",&n);
     vector<long int> s(n);
     for(i=0;i<n;i++)
     {
         scanf("%ld",&s[i]);
     }
     std::sort(s.begin(),s.end());
     mindiff=s[1]-s[0];
     for(i=2;i<n;i++)
     {
          if((s[i]-s[i-1])<mindiff)
          {
               mindiff=s[i]-s[i-1];
          }
     }        
     
     printf("%ld\n",mindiff);
}
return 0;
}                       
                      
