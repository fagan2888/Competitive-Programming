#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char a[1000000];
	unsigned long long int ans=1;
	long long int i,len,l=0;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len-1;i++)
	{
		if(((a[i]-'0')+(a[i+1]-'0'))==9)
		{
			if(l==0)
			l+=2;
			else
			l++;
		}
		else
		{
			if(l!=0)
			{
				if(l%2==0)
				{
					ans*=(l/2);
				}
				if(l%2==1)
				{
					ans*=((l+1)/2);
				}
			}
			l=0;
		}
	}
	if(l!=0)
	{
		if(l%2==0)
		{
			ans*=(l/2);
		}
		if(l%2==1)
		{
			ans*=((l+1)/2);
		}
	}
	cout<<ans<<"\n";
return 0;
}
