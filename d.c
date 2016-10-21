#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,len,x;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		x=s[i];
		x=x-7;
		s[i]=x;
		printf("%c",s[i]);
	}
return 0;
}
