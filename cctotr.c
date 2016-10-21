#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char p[27];
	scanf("%d%s",&t,p);
	while(t--)
	{
		char input[101];
		int len,i;
		scanf("%s",input);
		len=strlen(input);
		for(i=0;i<len;i++)
		{
			if(input[i]=='_')
			{
				input[i]=' ';
			}
			else if(isalpha(input[i]))
			{
				if(isupper(input[i]))
				input[i]=toupper(p[input[i]-'A']);
			
				else if(islower(input[i]))
				{
					input[i]=tolower(p[input[i]-'a']);
				}
			}
		}
		printf("%s\n",input);
	}
return 0;
}
