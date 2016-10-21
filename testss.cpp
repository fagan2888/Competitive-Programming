#include<stdio.h>
using namespace std;

long long int mod(long long int x)
{
 if(x<0)
 {
  return (-1*x);
 }
 return x;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  long long int n,i,sum=0;
  scanf("%lld",&n);
  int num,cum[n]; 
  for(i=0;i<n;i++)
  {
   scanf("%lld",&num);
   if(i==0)
   {
    cum[i]=num;
   }
   else
   {
    cum[i]=cum[i-1]+num;
   }
  }
  for(i=0;i<n;i++)
  {
   sum+=mod(cum[i]);
  }
  printf("%lld\n",sum);
 }
return 0;
}
