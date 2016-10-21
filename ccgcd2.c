#include<stdio.h>
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
int num1,t,i,ans,len;
char num2[252];
scanf("%d",&t);
while(t--)
{
          int rem=0;
          //fflush(stdin);
          scanf("%d",&num1);
          //fflush(stdin);
          scanf("%s",num2);
          if(num1==0)
          {
                     printf("%s\n",num2);
                     continue;
          }
          len=strlen(num2);
          i=0;
          while(i<len)
          {
                      rem=rem*10+(num2[i]-48);
                      rem=rem%num1;
                      i++;
          }
          ans=gcd(num1,rem);
          printf("%d\n",ans);
}
return 0;
}
