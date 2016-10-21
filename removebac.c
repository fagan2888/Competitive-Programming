#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,countac=0,countb=0;
	char s[50];
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;)
	{
		if(s[i]=='a')
		{
			if(i<len-1 && s[i+1]=='c')
			{
				i=i+2;
				countac++;
				continue;
			}
			else
			{
				s[i-(countac*2)-countb]=s[i];
			}
			i++;
			continue;
		}
		if(s[i]=='b')
		{
			countb++;
			i++;
		}
		else
		{
			if(s[i]=='c')
			{
				if(i-(countac*2)-countb-1>=0)
				{
					if(s[i-(countac*2)-countb-1]=='a')
					{
						countac++;
						continue;
					}
				}
			}
			s[i-(countac*2)-countb]=s[i];
			i++;
		}
		
		
	}
	
	s[i-(countac*2)-countb]='\0';
	
	printf("%s",s);
return 0;
}
