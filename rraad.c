#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,size=1,j;
	char s[50];
	scanf("%s",s);
	len=strlen(s);
	for(i=1;i<len;)
	{
		if(size==0)
		{
			s[size]=s[i];
			size++;
		}
		
		if(s[i]==s[i-1])
		{
			while(s[i]==s[i-1] && i<len)
			{
				i++;
			}
			size--;
		
		while(size>0 && s[size-1]==s[i])
		{
			while(i<len-1 && s[i]==s[i+1])
			{
				i++;
			}
			i++;
			size--;
		}
		}
		else
		{
			s[size]=s[i];
			size++;
			i++;
		}	
	}
	s[size]='\0';
	printf("%s",s);
	
return 0;
}
