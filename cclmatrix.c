#include<stdio.h>
#include<string.h>
#include<algorithm>
int main()
{
	
	int n,m,i,j,flag1=0,flag2=0,count=0,max=0,posi,posj;
	scanf("%d%d",&n,&m);
	int mat[n][m],s[n][m];
	memset(s,0,sizeof(s));
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);
			
			if(i==0 || j==0)
			{
				s[i][j]=mat[i][j];
			}
			if(mat[i][j]==0)
			{
				flag2=1;
			}
			if(mat[i][j]==1)
			{
				flag1=1;
				count++;
			}
		}
	}
	if(flag1==0 && flag2==1)
	{
		printf("0\n");
		return 0;
	}
	else if(flag1==1 && flag2==0)
	{
		printf("1\n");
		printf("1 1 %d %d\n",n,m);
		return 0;
	}
	
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			if(mat[i][j]==1)
			{
				 s[i][j]=(min(s[i][j-1],min(s[i-1][j],s[i-1][j-1])))+1;
				 if(s[i][j]>max)
				 {
				 	posi=i;
				 	posj=j;
				 	max=s[i][j];
				 }
			}
			else
			{
				s[i][j]=0;
			}
		}
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",s[i][j]);            
		}
		printf("\n");
	}
	
	printf("%d\n",count-(max*max)+1);
	for(i=posi-max+1;i<=posi;i++)
	{
		for(j=posj-max+1;j<=posj;j++)
		{
			mat[i][j]=0;
		}
	}
	
	
	if(max!=0)
	printf("%d %d %d %d\n",posi-max+2,posj-max+2,posi+1,posj+1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(mat[i][j]==1)
			printf("%d %d %d %d\n",i+1,j+1,i+1,j+1);
		}
	}
	
return 0;
}
