#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int p[10000]={0},c[100]={0},v[100][100]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j,tmp,pos;
		int count=0;
		memset(p,0,sizeof(p));
		memset(c,0,sizeof(c));
		memset(v,0,sizeof(v));
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
			for(j=0;j<c[i];j++)
			{
				scanf("%d",&v[i][j]);
			}
		}
		
		for(i=0;i<m;i++)
		{
			tmp=max_element(v+100*p[i],v+100*p[i]+c[p[i]])-(v+100*p[i]);
			count+=v[p[i]][tmp];
			v[p[i]][tmp]=0;
		}			
		printf("%d\n",count);
	}
return 0;
}
