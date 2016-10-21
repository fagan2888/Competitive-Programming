#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j;
		scanf("%d%d",&n,&m);
		char mat[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf(" %c",&mat[i][j]);
			}
			reverse(mat[i],mat[i]+m);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%c",mat[i][j]);
			}
			printf("\n");
		}
		
		
	}
return 0;
}
