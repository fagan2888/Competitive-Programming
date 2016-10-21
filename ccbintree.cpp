#include<stdio.h>
#include<set>
#include<algorithm>
#include<cmath>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y,i,tmp,lcs,flag=0,dis1=0,dis2=0,dis3=0,save;
		set<int> p1,p2;
		scanf("%d%d",&x,&y);
		if(x==y)
		{
			printf("0\n");
			continue;
		}
		tmp=x;
		while(tmp!=0)
		{
			dis1++;
			p1.insert(tmp);
			tmp=tmp/2;
		}
		
		tmp=y;
		while(tmp!=0)
		{
			dis2++;
			p2.insert(tmp);
			if(flag==0 && (p1.find(tmp)!=p1.end()))
			{
				lcs=tmp;
				save=dis2;
				flag=1;
			}
			tmp=tmp/2;
		}
		dis3=dis2-save;
		
		printf("%d\n",abs(dis1+dis2-(2*dis3)-2));
	}
return 0;
}
