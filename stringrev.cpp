#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char s[]="abcde\0",tmp;
	len=strlen(s);
	for(i=len-1,j=0;i>j;i--,j++)
	{
		s[i]=s[j]+s[i]-(s[j]=s[i]);
	}
	printf("%s\n",s);
return 0;
}
