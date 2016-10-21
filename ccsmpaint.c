#include<stdio.h>

int main()
{
	int n,i,j,total=0;//freq[101],size=0,total=0;
	scanf("%d",&n);
	int mat[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
			if(mat[i][j]!=0)
			total++;
			/*if(freq[mat[i][j]]==0)
			size++;
			freq[mat[i][j]]++;*/
		}
	}
	
	printf("%d\n",total);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]!=0)
			printf("%d %d %d %d %d\n",mat[i][j],i+1,i+1,j+1,j+1);
		}
	}
	
	
return 0;
}
