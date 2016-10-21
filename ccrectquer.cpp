#include<stdio.h>
#include<set>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef pair<int,int> ii;

set<ii> s[10];

int ispresent(int i,int x1,int y1,int x2,int y2);

int main()
{
	int n,q,i,j;
	scanf("%d",&n);
	int mat[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);/*
			col[mat[i][j]-1].insert(j);
			row[mat[i][j]-1].insert(i);*/
			s[mat[i][j]-1].insert(ii(i,j));
		}
	}
	
	
	
	scanf("%d",&q);
	while(q--)
	{
		int x1,x2,y1,y2,ans=0;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		x1--;x2--;y1--;y2--;
		for(i=0;i<10;i++)
		{
			ans+=ispresent(i,x1,y1,x2,y2);
			//cout<<ans<<" "<<i+1<<"\n";
		}
		printf("%d\n",ans);
	
	}
return 0;
}


int ispresent(int i,int x1,int y1,int x2,int y2)
{
	int tmp;
	if(s[i].size()==0)
	return 0;
	while(x1<=x2)
	{
		tmp=s[i].size();
		s[i].insert(ii(x1,y1));
		if(tmp==s[i].size())
		return 1;
		
		typeof(s[i].find(ii(x1,y1))) it=s[i].find(ii(x1,y1));
		it++;
		if(it!=s[i].end())
		{
			if(it->first==x1 && it->second<=y2)
			{
				s[i].erase(--it);      
				return 1;
			}
		}
		s[i].erase(--it);
		x1++;
	}
	return 0;
}
