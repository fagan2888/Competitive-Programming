#include<stdio.h>

int main()
{
	int k,f[9]={0},i,j;
	char mat[4][4];
	scanf("%d",&k);
	getchar();
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%c",&mat[i][j]);
			if(mat[i][j]=='.')
			{	}
			else
			f[mat[i][j]-'1']++;
		}
		getchar();
	}
	
	for(i=0;i<9;i++)
	{
		if(f[i]>(2*k))
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	
return 0;
}
