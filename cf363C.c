#include<stdio.h>
#include<string.h>

int main()
{
	char s[200001];
	int i,j,len,state=1;
	scanf("%s",s);
	len=strlen(s);
	
	for(i=1,j=1;i<len;i++)
	{
		if(s[i]==s[i-1] && state==1)
		{
			state=2;
			s[j]=s[i];
			j++;
		}
		else if(s[i]==s[i-1] && state==2)
		{
			state=2;
		}
		else if(s[i]==s[i+1] && i!=len-1 && state==2)
		{
			state=3;
			s[j]=s[i];
			j++;
		}
		else if(s[i]==s[i-1] && state==3)
		{
			if(s[i]==s[i+1] && i!=len-1)
			{
				state=3;
			}
			else
			{
				state=1;
			}
		}
		else
		{
			s[j]=s[i];
			j++;
			state=1;
		}
		
		
		
	}
	s[j]='\0';
	
	printf("%s\n",s);
	
return 0;
}
