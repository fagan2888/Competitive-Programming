#include<stdio.h>

typedef unsigned long long int LL;
 
LL mod=1000000007;
 
LL pow(LL x,LL y)
{
          LL res=1;
          
          while(y--)
          {
                    res*=x;
                    res%=mod;
          }
          
          return res;
}
                    
 
int main()
{
    LL t,l,r,dl,dr,sum,i,temp,a,b;
    
    scanf("%llu",&t);
    
    while(t--)
    {
              scanf("%llu %llu",&l,&r);
              
              sum=0;
              dl=0,dr=0;
              
              temp=l;
              
              while(temp)
              {
                     dl++;
                     temp/=10;
              }
              
              temp=r;
              
              while(temp)
              {
                         dr++;
                         temp/=10;
              }
              
           
             
             if(dl==dr)
             {
                       
                       a=r*(r+1)/2;
                       b=l*(l-1)/2;
                       
                       sum+=(a-b)*dl;
                       
                       sum%=mod;
                       
                        printf("%llu\n",sum);
             }
                       
                       
 
             else
             {
                   a=dl*((pow(10,dl)*(pow(10,dl)-1)-(l*(l-1)))/2);
             
                     //printf("%llu\n",a);
                     a%=mod;
                     sum+=a;
                     sum%=mod;
                 
                 b=dr*((r*(r+1)/2)-(pow(10,dr-1)*(pow(10,dr-1)-1)/2));
                // printf("%llu\n",b);
                 
                 b%=mod;
                 sum+=b;
                 
                 sum%=mod;
                 
                 //sum of all (i+1) digit numbers
                 for(i=dl;i<dr-1;i++)
                 {
                                   a=pow(10,i);
                                   b=pow(10,i+1)-1;
                                   
                                   //a%=mod;
                                   a=(a*(a-1))/2;
                                   //a%=mod;
                                   
                                   //b%=mod;
                                   b=b*(b+1)/2;
                                   //b%=mod;
                                   
                                   sum+=(b-a)*(i+1);
                                   sum%=mod;
                              
                 }
                 
                 printf("%llu\n",sum);
             }
     }
             
             return 0;
}
 
