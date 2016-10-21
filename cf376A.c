#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000001];
	long long int len,i,pos,l=0,r=0;
	scanf("%s",s);
	len=strlen(s);
	
	for(i=0;i<len;i++)
	{
		if(s[i]=='^')
		{
			pos=i;
			break;
		}
	}
	
	for(i=pos-1;i>=0;i--)
	{
		if(s[i]=='=')
		{
			continue;
		}
		
		l+=(s[i]-'0')*(pos-i);
	}
	
	for(i=pos+1;i<len;i++)
	{
		if(s[i]=='=')
		{
			continue;
		}
		
		r+=(s[i]-'0')*(i-pos);
	}
	
	//printf("%d %d\n",l,r);
	
	if(l==r)
	{
		printf("balance\n");
	}
	else if(l<r)
	{
		printf("right\n");
	}
	else if(l>r)
	{
		printf("left\n");
	}
	
return 0;
}
