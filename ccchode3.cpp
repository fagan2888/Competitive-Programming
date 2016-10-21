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
		int i,f[26]={0},size=0,len,f2[26],j;
		char freq[27],cypher[150001],map[26],tmp,fin[26];
		scanf("%s",freq);
		getchar();
		cin.getline(cypher,150001);
		set<int> num;
		len=strlen(cypher);
		for(i=97;i<=122;i++)
		{
			f2[i-97]=i;
		}
		for(i=0;i<len;i++)
		{
			tmp=tolower(cypher[i]);
			if('a'<=tmp  && tmp<='z')
			{
				f[tmp-'a']++;
			}
		}
		
		for(i=0;i<26;i++)
		{
			for(j=0;j<26-i-1;j++)
			{
				if(f[j]>f[j+1])
				{
					swap(f[j],f[j+1]);
					swap(f2[j],f2[j+1]);
				}
			}
		}
		
		for(i=0;i<26;i++)
		{
			if(f[i]!=0)
			{
				fin[size++]=(char)f2[i];
			}
		}
		
		for(i=0;i<size;i++)
		{
			map[fin[i]-'a']=freq[26-size+i];
			//printf("%c ",fin[i]);
		}
		/*
		printf("\n");
		
		for(i=0;i<size;i++)
		{
			printf("%c ",map[i]);
		}
		printf("\n");*/
		
		for(i=0;i<len;i++)
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
