#include<stdio.h>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int k,n,i,pos;
	char cha;
	scanf("%d%d",&k,&n);
	char lucky[k][51];//,s[51];
		
	for(i=0;i<k;i++)
	{
		scanf("%s",lucky[i]);
	}
	
	while(n--)
	{
		vector<char> str;
		char ch;
		int flag=0;
		pos=0;
		scanf("%c",ch);
		while(ch!='\n')
		{
			str.push_back(ch);
			scanf("%c",ch);
		}
		if(str.size()>=47)
		{
			printf("Good\n");
			continue;
		}
		
		for(i=0;i<k;i++)
		{
			if(std::find(str.begin(),str.end(),lucky[i]) != str.end())
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			printf("Good\n");
			continue;
		}
		else
		{
			printf("Bad\n");
			continue;
		}
		
	}
return 0;
}
