#include<stdio.h>
using namespace std;
#include<iostream>


int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
int num1,t,i,ans,len,rem;
char num2[252];
scanf("%d",&t);
while(t--)
{
          scanf("%d",&num1);
          //fflush(stdin);
          scanf("%s",num2);
          if(num1==0)
          {
                     printf("0\n");
                     continue;
          }
          len=strlen(num2);
          i=0;
          while(i<len)
          {
                      rem=rem*10+(num2[i]-'0');
                      rem=rem%num1;
                      i++;
          }
          ans=gcd(num1,rem);
          printf("%d\n",ans);
}
}
