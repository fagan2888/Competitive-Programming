#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[1000000];
	unsigned long long int ans=1;
	long long int i,len;
	scanf("%s",a);
	len=strlen(a);
	for(i=1;i<len-1;i++)
	{
		if(((a[i]-'0')+(a[i-1]-'0'))==9 &&  ((a[i]-'0')+(a[i-1]-'0'))==9)
		{
			ans=ans*2;
		}
	}
	cout<<ans<<"\n";
return 0;
}
