#include<iostream>
#include<stdio.h>
using namespace std;                      
int main()
{
    int n,q,z,i;
    scanf("%d%d",&n,&q);
    unsigned int sum[n];
    unsigned int s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&z);
        s+=z;
        sum[i]=s;
    }
    int query[50000]={0};
    int c[50000]={0};
    int l=-1;
    for(i=0;i<q;)
    {
        char ch;
        int a,b;
        cin>>ch>>a>>b;
        //scanf("%d %d",&a,&b);
        if(ch=='S')
        {
            long long int ans=0;
            for(int j=0;j<=l;j++)
            {
                if(a<=query[j] && query[j]<=b)
                {
                    ans+=c[j];
                }
            }
            if(a==0)
            {
                ans+=sum[b];
            }
            else
            {    
                ans+=(sum[b]-sum[a-1]); 
            }                           
            printf("%lld\n",ans);
            ++i;
        }
        if(ch=='G')
        {
            ++l;
            query[l]=a;
            c[l]=b;
            ++i;
        }
         if(ch=='T')
        {
            ++l;
            query[l]=a;
            c[l]-=b;
            ++i;
        }
    }                                    
    return 0;
}         
