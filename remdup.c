#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],i,r[50],j,k;
	scanf("%s",s);
	j=0;
	for(i=0;i<strlen(s);i++)
	{
		printf("s[i]=%c",s[i]);
		printf("\n");
		printf("j=%d\n",j);
		if(i==(strlen(s)-1))
		{
			if(s[i]==r[j-1])
			{
				j=j-1;
			}
			else
			{
				r[j]=s[i];
				j++;
			}
			continue;
		}
		if(j!=0)
		{
		
		if(s[i]==r[j-1])
		{
			j=j-1;
			while(s[i]==s[i+1] && i<strlen(s)-1)
			{
				i++;
			}
			continue;
		}
		}
		for(k=0;k<j;k++)
		{
			printf("%c",r[k]);
		}
		printf("\n");
		if(s[i]!=s[i+1])
		{
			r[j]=s[i];
			j++;
		}
		else
		{
			while(s[i]==s[i+1] && i<strlen(s)-1)
			{
				i++;
			}
		}
		for(k=0;k<j;k++)
		{
			printf("%c",r[k]);
		}
		printf("\n"); 
	}
	for(i=0;i<j;i++)
	{
		printf("%c",r[i]);
	}
return 0;
}
