#include<stdio.h>
#include<string.h>
int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);   
}
int main()
{
    int a,i,len,n,t;
    char ch[251];
    scanf("%d",&t);
    while(t--){
    scanf("%d %s",&a,ch);
    if(a==0) printf("%s\n",ch);
    else
    {
            len=strlen(ch);
            n=0;
            for(i=0;i<len;i++)
            {
                 n*=10;
                 n+=ch[i]-'0';
                 n%=a;                                           
            }
            printf("%d\n",gcd(a,n));
    }
}
    return 0;   
}
