#include<stdio.h>
#include<algorithm>
using namespace std;

int number(char *a,int len)
{
	int i,k,j,l;
	if(len==1)
	{
		return 0;
	}
	
	bool p[len][len]; //whether str[i--j] is palidrome
	int c[len][len];  //min cuts to make str[i..j] palindrome
	
	for(i=0;i<len;i++)
	{
		p[i][i]=true;
		c[i][i]=0;
	}
	
	for(k=2;k<=len;k++)
	{
		for(i=0;i<len-k+1;i++)
		{
			j=i+k-1;
			
			if(a[i]==a[j])
			{
				if(k==2)
				{
					p[i][j]=true;
				}
				else
				p[i][j]=p[i+1][j-1];
			}
			else
			{
				p[i][j]=false;
			}
			if(p[i][j])
			{
				c[i][j]=0;
			}
			else
			{
				c[i][j]=1000000000;
				for(l=i;l<=j-1;l++)
				{
					c[i][j]=min(c[i][j],c[i][l]+c[l+1][j]+1);
				}
			}
			
			
		}
		
	}
return c[0][len-1];
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char s[n+1];
		scanf("%s",s);
		printf("%d\n",number(s,n)+1);
	}
return 0;
}
