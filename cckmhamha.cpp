#include<stdio.h>
#include<algorithm>
#include<set>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define tr2(c,s,it,it1) for(typeof(c.begin()) it=c.begin(),typeof(s.begin()) it1=s.begin();it!=c.end() && it1!=s.end();)

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,a,b;
		scanf("%d",&n);
		pair<int,int> p;
		set< pair<int,int> > sr;
		set< pair<int,int> > sc;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			p.first=a;
			p.second=b;
			sr.insert(p);
			p.first=b;
			p.second=a;
			sc.insert(p);
		}
		
		printf("\n");
		tr(sr,it)
		{
			printf("%d %d\n",it->first,it->second);
		}
		printf("\n");
		tr(sc,it)
		{
			printf("%d %d\n",it->first,it->second);
		}
		
		set< pair<int,int> > countr;
		set< pair<int,int> > countc;
		int count=1,ind=0;
		//printf("hello\n");
		typeof(sr.begin()) it1;
		tr(sr,it)
		{
			count=1;
			it1=it;
			it1++;
			//printf("%d %d\n",it->first,it->second);
			while(it1->first==it->first && it1!=sr.end())
			{
				count++;
				it++;
				it1++;
			}
			ind++;
			
			p.first=-1*count;
			p.second=ind;
			countr.insert(p);
		}
		//printf("hello\n");
		ind=0;
		tr(sc,it)
		{
			count=1;
			it1=it;
			it1++;
			while(it1->first==it->first && it1!=sc.end())
			{
				count++;
				it++;
				it1++;
			}
			ind++;
			p.first=-1*count;
			p.second=ind;
			countc.insert(p);
		}
		//printf("hello\n");
		printf("\n");
		tr(countr,it)
		{
			printf("%d %d\n",it->first,it->second);
		}
		printf("\n");
		tr(countc,it)
		{
			printf("%d %d\n",it->first,it->second);
		}
		
		tr2(countr,countc,it,it1)
		{
			if(it->first<it1->first)
			{
				
			}
		}
		
	}
	
	
return 0;
}
