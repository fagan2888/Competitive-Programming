#include<stdio.h>

int main()
{
 	int n,m,i,j,count=0,k;
 	scanf("%d%d",&n,&m);
 	int a[n][m],p[n][m],f[n][m];
 	
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			scanf("%d",&p[i][j]);
 		}
 	}
 	
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			scanf("%d",&a[i][j]);
 			if(a[i][j]!=0)
 			count++;
 			f[i][j]=p[i][j]-a[i][j];
 		}
 	}
 	
 	printf("%d\n",count);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			if(a[i][j]!=0)
 			{
 				k=p[i][j]-a[i][j];
 				printf("%d %d %d %d %d\n",i+1,j+1,i+1,j+1,k);
 			}
 		}
 	}
 	
 	return 0;
 }
