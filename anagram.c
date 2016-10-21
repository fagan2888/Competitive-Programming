#include<stdio.h>
#include<string.h>
int main()
{
	int freq1[26]={0},freq2[26]={0},i,flag=0;
	char s1[100],s2[100];
	printf("enter two words\n");
	scanf("%s%s",s1,s2);
	for(i=0;i<strlen(s1);i++)
	{
		freq1[s1[i]-'a']++;
	}
	for(i=0;i<strlen(s2);i++)
	{
		freq2[s2[i]-'a']++;
	}
	
	for(i=0;i<26;i++)
	{
		if(freq1[i]!=freq2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nnot an anagram\n");
	}
	else
	{
		printf("\nanagram\n");
	}
return 0;
}
