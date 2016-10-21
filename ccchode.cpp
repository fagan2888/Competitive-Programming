#include<stdio.h>
#include<iostream>
#include<set>
#include<cstring>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

typedef pair<int,char> ic;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,f[26]={0},size;
		char freq[27],cypher[150001],map[26];
		scanf("%s",freq);
		getchar();
		cin.getline(cypher,150001);
		set<ic> s;
		for(i=0;i<strlen(cypher);i++)
		{
			if('a'<=tolower(cypher[i]) && tolower(cypher[i])<='z')
			{
				f[tolower(cypher[i])-'a']++;
			}
		}
		
		for(i=0;i<26;i++)
		{
			if(f[i]==0)
			continue;
			else
			{
				s.insert(ic(f[i],('a'+i)));
			}
		}
		
		size=s.size();
		tr(s,it)
		{
			//printf("%d %c\n",it->first,it->second);
			map[it->second-'a']=freq[26-size];
			size--;
		}
		
		for(i=0;i<strlen(cypher);i++)
		{
			if(!isalpha(cypher[i]))
			continue;
			
			if(isupper(cypher[i]))
			{
				cypher[i]=map[tolower(cypher[i])-'a'];
				cypher[i]=toupper(cypher[i]);
			}
			else
			{
				cypher[i]=map[(cypher[i])-'a'];
			}
		}
		
		printf("%s\n",cypher);
	}
return 0;
}
