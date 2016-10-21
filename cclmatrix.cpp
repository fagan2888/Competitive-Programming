#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
 
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
typedef pair<int,int> ii;
 
int main()
{
	
	int n,m,i,j,flag1=0,flag2=0,count=0,max=-1,posi,posj,k,tmp1,tmp2;
	scanf("%d%d",&n,&m);
	int mat[n][m],s[n][m];
	memset(s,0,sizeof(s));
	vector< pair<ii,ii> > final;
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
	
	while(max!=0)
	{
		
		for(i=0;i<n;i++)
		s[i][0]=mat[i][0];
		
		for(j=0;j<m;j++)
		s[0][j]=mat[0][j];
		
		for(i=1;i<n;i++)
		{
			for(j=1;j<m;j++)
			{
				if(mat[i][j]==1)
				{
					 s[i][j]=(min(s[i][j-1],min(s[i-1][j],s[i-1][j-1])))+1;
				}
				else
				{
					s[i][j]=0;
				}
			}
		}
		
		/*
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	getchar();*/
		max=0;
		tmp1=0;tmp2=0;
		label:
		
		for(i=tmp1;i<n;i++)
		{
			for(j=tmp2;j<m;j++)
			{
				if(s[i][j]>1)
				{
					tmp1=i;tmp2=j;
					while(((tmp1+1)<n && (tmp2+1)<m) && s[tmp1+1][tmp2+1]>1)
					{
						tmp1++;tmp2++;
					}
			
					max=s[tmp1][tmp2];
					posi=tmp1;
					posj=tmp2;
					count=count-(max*max)+1;
					for(i=posi-max+1;i<=posi;i++)
					{
						for(j=posj-max+1;j<=posj;j++)
						{
							mat[i][j]=0;
							s[i][j]=0;
						}
					}
					final.push_back(make_pair(make_pair(posi-max+2,posj-max+2),make_pair(posi+1,posj+1)));
					tmp1++;tmp2++;
					goto label;
				}
			}
		}
		//printf("%d\n",max);
	}
	
	if(max!=0)
	final.push_back(make_pair(make_pair(posi-max+2,posj-max+2),make_pair(posi+1,posj+1)));
	
	
	int c=0;
	
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<m;j++)
		{
			if(mat[i][j]==1)
			{
				c++;
				if(j==m-1 && c>1)
				{
					final.push_back(make_pair(make_pair(i+1,j-c+2),make_pair(i+1,j+1)));           
					count=count-c+1;
					for(k=j-c+1;k<=j;k++)
					{
						mat[i][k]=0;
					}
					c=0;
				}
			}
			else
			{
				if(c>1)
				{
					final.push_back(make_pair(make_pair(i+1,j-c+1),make_pair(i+1,j)));           
					count=count-c+1;
					
					
					for(k=j-c;k<=j-1;k++)
					{
						mat[i][k]=0;
					}
					c=0;
				}
				c=0;
			}
		}
	}
	
	
	/*printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}*/
	
	c=0;
	for(j=0;j<m;j++)
	{
		c=0;
		for(i=0;i<n;i++)
		{
				if(mat[i][j]==1)
				{
					c++;
					if(i==n-1 && c>1)
					{
						final.push_back(make_pair(make_pair(i-c+2,j+1),make_pair(i+1,j+1)));           
						count=count-c+1;
						for(k=i-c+1;k<=i;k++)
						{
							mat[k][j]=0;
						}
						c=0;
					}
				}
				else
				{
					if(c>1)
					{
						final.push_back(make_pair(make_pair(i-c+1,j+1),make_pair(i,j+1)));           
						count=count-c+1;
						for(k=i-c;k<=i-1;k++)
						{
							mat[k][j]=0;
						}
						c=0;
					}
					c=0;
				}
		}
	}
	
	
	
	
	
	
	
	printf("%d\n",count);
	
	tr(final,it)
	{
		printf("%d %d %d %d\n",it->first.first,it->first.second,it->second.first,it->second.second);
	}
	
	
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

