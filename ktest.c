#include<stdio.h>
#include<math.h>
int ispalindrome(long int n)
{
 
  long int rem,temp;
  long int reverse=0;
  temp=n;
  while(temp!=0)
  {
     rem=temp%10;
     reverse=reverse*10+rem;
     temp/=10;
  }  
  if(reverse==n)  
      return 1;
      return 0;
}
int main()
{
    long int number,limit,o;
   long int i,j,k,c,g,n,less,p;
    limit=1000000;
    scanf("%ld",&number);
    g=sqrt(limit);
    int a[g-1];
    for(i=0;i<g-1;i++)
    a[i]=0;
    for(p=2;p*p<=g;p++)
    {
 	    if(a[p-2]==0)
 	    {
                       for(j=p*p;j<=g;j+=p)
                       {
                          a[j-2]=1;
                       }
      	 }
    }
    
  for(i=number;i<=limit;i++)
    {
        c=0;long int y;
       for(j=0;(j+2<i && j<g-1);j++)
       {
       if(a[j]==0)
       {
                 
                 y=j+2; 
                  if(i%y==0)
                  {
                               c++;
                               break;
                  }
       }
       }     
       if(c==0)
       {
       if(ispalindrome(i))
    {
                          printf("%ld\n",i);
                          break;
       }
    }
}
 
    return 0;
} 
