#include<stdio.h>
#include<string.h>
int main()
{
	int n,q,i,j,k;
	scanf("%d",&n);
	int mat[n][n],freq[10]={0},size=0,row[n][10],col[n][10],o[10]={0},colmin[n][10],colmax[n][10];
	memset(row,0,sizeof(row));
	memset(col,0,sizeof(col));
	memset(colmin,-1,sizeof(colmin));
	memset(colmax,-1,sizeof(colmax));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
			row[i][mat[i][j]-1]++;
			col[j][mat[i][j]-1]++;
			o[mat[i][j]-1]++;
			if(colmin[i][mat[i][j]-1]==-1)
			colmin[i][mat[i][j]-1]=j;
			
			colmax[i][mat[i][j]-1]=j;
			/*
			if(freq[mat[i][j]-1]==0)
			{
				size++;
				freq[mat[i][j]-1]++;
			}*/
		}
	}
	
	scanf("%d",&q);
	while(q--)
	{
		int x1,x2,y1,y2,ans=0;
		int tmpsize=0,f[10]={0};
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		x1--;x2--;y1--;y2--;
		if(x1==x2 && y1==y2 && x1==y1)
		{
			printf("1\n");
			continue;
		}
		for(i=x1;i<=x2;i++)
		{
			for(j=0;j<10;j++)
			{
				if(o[j]==0)
				continue;
				if(row[i][j]!=0 && f[j]!=1)
				{
					if((y1<=colmin[i][j] && colmin[i][j]<=y2) || (y1<=colmax[i][j] && colmax[i][j]<=y2))
					{
						f[j]=1;
						tmpsize++;
					}
					else if((y1>colmin[i][j] && colmax[i][j]<y1) || (y2<colmin[i][j] && colmax[i][j]>y2))
					{
						continue;
					}
					else
					{
						for(k=y1;k<=y2;k++)
						{
							if(col[k][j]!=0 && mat[i][k]==(j+1))
							{
								f[j]=1;
								tmpsize++;
								break;
							}
						}
					}
				}
			}
		}
		printf("%d\n",tmpsize);
	
	}
return 0;
}

