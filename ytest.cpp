#include<iostream>
using namespace std;
int prime(int);
int reverse(int n)
{
    int temp,rev=0;
    temp=n;
    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
    if(rev==n)
    {
        if(prime(rev))
            return 1;
    }
        return 0;
}
int prime(int n)
{
    int count=0,i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count!=1)
    return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(;;n++)
    {
        if(reverse(n)==1)
            break;
    }
    cout<<n;
}
