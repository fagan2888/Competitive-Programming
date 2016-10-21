#include<stdio.h>
#include<set>
#include<algorithm>

using namespace std;

int prime[]={2,3,5,7,11,13,15,17,19,23,27,29,31};
set<int> s(prime,prime+13);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int l,u,i,sum=0,count=0,tmp;
		scanf("%d%d",&l,&u);
		for(i=l;i<=u;i++)
		{
			sum=0;
			tmp=i;
			while(tmp>0)
			{
				sum+=tmp%10;
				tmp=tmp/10;
			}
			if(find(s.begin(),s.end(),sum)!=s.end())
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
return 0;
}
