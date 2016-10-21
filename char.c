#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[101],ch,flag1=0,flag2=0,flag3=0;
		int i;
		scanf("%s",s);
		
		if(strlen(s)==1)
		{
			printf("%s",s);
			printf("\n");
			continue;
		}
		for(i=1;i<strlen(s);i++)
		{
			if(s[i]=='_')
			{
				flag1=1;
			}
			else if(s[i]>='A' && s[i]<='Z')
			{
				flag2=1;
			}
		}
		if(flag1==0 && flag2==0)
		{
			printf("%s",s);
			printf("\n");
		}
		else if(flag1==1 && flag2==0)
		{
			for(i=0;i<strlen(s);i++)
			{
				if(s[i]=='_')
				{
					i++;
					printf("%c",toupper(s[i]));
				}
				else
				{
					printf("%c",s[i]);
				}
			}
			printf("\n");
		}
		else if(flag1==0 && flag2==1)
		{
			for(i=0;i<strlen(s);i++)
			{
				if(s[i]>='A' && s[i]<='Z')
				{
					printf("%c",'_');
					printf("%c",tolower(s[i]));
				}
				else
				{
					printf("%c",s[i]);
				}
			}
			printf("\n");
		}
		else if(flag1==1 && flag2==1)
		{
			printf("Error!\n");
		}
	}
return 0;
}
