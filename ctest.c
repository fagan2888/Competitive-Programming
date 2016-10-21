#include<stdio.h>

typedef unsigned long long int ull;

int digits(ull a)
{
	int c=0;
	while(a>0)
	{
		c++;
		a=a/10;
	}
	return c;
}

ull po(ull a,ull b)
{
	ull i,ans=1;
	for(i=b;i>0;i--)
	{
		ans=ans*a;
	}
	return ans;
}



int main()
{
	int dig1,dig2;
	dig1=digits(10000000000000);
	dig2=digits(10000000000000);
	
	dig2=1000/po(10,dig1/2);
	printf("%d %d\n",dig1,dig2);
	return 0;
}
