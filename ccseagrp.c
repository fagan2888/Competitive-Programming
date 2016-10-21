#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,x,y,i,j,flag=0;
		scanf("%d%d",&n,&m);
		int mat[n][n],row[n];
		memset(mat,0,sizeof(mat));
		memset(row,0,sizeof(row));
		
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&x,&y);
			if(mat[x-1][y-1]==0)
			{
				mat[x-1][y-1]=1;
				row[x-1]++;
			}
			if(mat[y-1][x-1]==0)
			{
				mat[y-1][x-1]=1;
				row[y-1]++;
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
		printf("\n");   
		for(i=0;i<n;i++)
		{
			flag=0;
			if(row[i]==1)
			continue;
		
			for(j=n-1;j>=0;j--)
			{
				if(mat[i][j]==1)
				{
					if(row[j]!=1)
					{
						mat[i][j]=0;
						mat[j][i]=0;
						row[i]--;
						row[j]--;
						if(row[i]==1)
						{
							flag=1;
							break;
						}
					}
				}
			}
			
			if(flag==1)
			{
				continue;
			}
		}
		flag=0;
		for(i=0;i<n;i++)
		{
			if(row[i]!=1)
			{
				flag=1;
				break;
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}
		
		if(flag==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
return 0;
}
