#include<stdio.h>
#include<string.h>
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
			tmp=0;
			for(j=0;j<c[p[i]];j++)
			{
				if(tmp<v[p[i]][j])
				{
					tmp=v[p[i]][j];
					pos=j;
				}
			}
			v[p[i]][pos]=0;
			count+=tmp;
		}			
		printf("%d\n",count);
	}
return 0;
}
