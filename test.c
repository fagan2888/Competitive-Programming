#include<stdio.h>
#include<math.h>

int main()
{
    int z,n,k,i=1;
    long long a;
    scanf("%lld%d%d",&a,&n,&k);
    n++;
    printf("%d",(a%n));
    while(i!=k)
    {
               a/=n;
               printf(" %d",(a%n));
               i++;
    }
 
    return 0;
}
