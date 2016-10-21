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
		int i,f[26]={0},size,order[26]={0},o;
		char freq[27],cypher[150001],map[26],tmp[26],len=0;
		scanf("%s",freq);
		fflush(stdin);
		cin.getline(cypher,150001);
		set<ic> s,pat;
		set<int> num;
		o=1;
		for(i=0;i<strlen(cypher);i++)
		{
			if('a'<=tolower(cypher[i]) && tolower(cypher[i])<='z')
			{
				if(order[tolower(cypher[i])-'a']==0)
				{
					order[tolower(cypher[i])-'a']=o;
					o++;
				}
				f[tolower(cypher[i])-'a']++;
			}
		}
		
		for(i=0;i<26;i++)
		{
			cout<<order[i]<<" ";
		}
		cout<<"\n";
		
		for(i=0;i<26;i++)
		{
			if(f[i]!=0)
			{
				size++;
				num.insert(f[i]);
			}
		}
		
		/*
		for(i=0;i<26;i++)
		{
			if(f[i]==0)
			continue;
			else
			{
				s.insert(ic(f[i],('a'+i)));
			}
		}
		*/
		tr(num,it)
		{
			pat.clear();
			for(i=0;i<26;i++)
			{
				if(f[i]==*it)
				{
					pat.insert(ic(order[i],('a'+i)));
				}
			}
			tr(pat,it2)
			{
				tmp[len]=it2->second;
				len++;
			}
		}
		
		for(i=0;i<len;i++)
		{
			map[tmp[i]-'a']=freq[26-len+i];
			printf("%c -> %c\n",tmp[i],freq[26-len+i]);
		}
		
		/*
		size=s.size();
		tr(s,it)
		{
			map[it->second-'a']=freq[26-size];
			size--;
		}
		*/
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
