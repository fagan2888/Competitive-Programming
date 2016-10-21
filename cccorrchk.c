#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int t,count=0;
	scanf("%d",&t);
	while(t--)
	{
		int i,flag=0,a=0,b=0,c=0,base,p;
		char s[40];
		scanf(" %s",s);
		for(i=0;i<strlen(s);i++)
		{
			if(!((s[i]>='0' && s[i]<='9') || (s[i]=='+') || (s[i]=='=')))
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			continue;
		}
		//printf("hi\n");
		i=strlen(s)-1;
		base=10;
		p=0;
		while(s[i]!='=')
		{
			c+=(s[i]-'0')*pow(base,p);
			p++;
			i--;
		}
		
		i--;
		base=10;
		p=0;
		while(s[i]!='+')
		{
			b+=(s[i]-'0')*pow(base,p);
			p++;
			i--;
		}
		i--;
		base=10;
		p=0;
		while(i>=0)        
		{
			a+=(s[i]-'0')*pow(base,p);
			p++;
			i--;
		}
		
		if((a+b)==c)
		{
			count++;
		}
		//printf("%d %d %d\n",a,b,c);
	}
	printf("%d\n",count);
return 0;
}
