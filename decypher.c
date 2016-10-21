#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[101];
	int i;
	cin>>s;       
	for(i=0;i<strlen(s);i++)
	{
		cout<<s[i]-7; 
	}
return 0;
}
