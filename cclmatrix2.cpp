#include<stdio.h>
#include<cstring> 
#include<algorithm>
#include<vector>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define mk make_pair
using namespace std;

typedef pair<int,int> ii;

int main()
{
 	int n,m,i,j,count=0,posi,posj,k,count2=0,max=-1,tmp1,tmp2,minn=1000000000;
 	scanf("%d%d",&n,&m);
 	int a[n][m],p[n][m],d[n][m],f[n][m],s[n][m];
 	vector< pair< pair<ii,ii>,int> > final;
 	memset(s,0,sizeof(s));
 	
 	
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
 			
 			d[i][j]=p[i][j]-a[i][j];
 			if(d[i][j]!=0)
 			f[i][j]=1;
 		}
 	}
 	count2=n*m;
 	
 	
 	while(max!=0)
	{
		
		for(i=0;i<n;i++)
		s[i][0]=f[i][0];
		
		for(j=0;j<m;j++)
		s[0][j]=f[0][j];
		
		for(i=1;i<n;i++)
		{
			for(j=1;j<m;j++)
			{
				if(f[i][j]==1)
				{
					 s[i][j]=(min(s[i][j-1],min(s[i-1][j],s[i-1][j-1])))+1;
				}
				else
				{
					s[i][j]=0;
				}
			}
		}
		
		
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
					
					minn=1000000000;
					for(i=posi-max+1;i<=posi;i++)
					{
						for(j=posj-max+1;j<=posj;j++)
						{
							minn=min(minn,d[i][j]);
						}
					}
					for(i=posi-max+1;i<=posi;i++)
					{
						for(j=posj-max+1;j<=posj;j++)
						{
							d[i][j]=d[i][j]-minn;
							if(d[i][j]==0)
							{
							 f[i][j]=0;
							 }
						}
					}
					final.push_back(mk(make_pair(make_pair(posi-max+2,posj-max+2),make_pair(posi+1,posj+1)),minn));
					tmp1++;tmp2++;
					goto label;
				}
			}
		}
		//printf("%d\n",max);
	}
	/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",d[i][j]);   
		}
		printf("\n");
	}*/
	
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(d[i][j]!=0)
			final.push_back(mk(mk(mk(i+1,j+1),mk(i+1,j+1)),d[i][j]));
		}
	}
*/
  	int c=0;
	
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<m;j++)
		{
			if(f[i][j]==1)
			{
				c++;
				if(j==m-1 && c>1)
				{
					
					//count=count-c+1;
					minn=1000000000;
					for(k=j-c+1;k<=j;k++)
					{
						minn=min(minn,d[i][k]);
					}
					for(k=j-c+1;k<=j;k++)
					{
						
						d[i][k]=d[i][k]-minn;
						if(d[i][k]==0)
						{
							f[i][k]=0;
						}
					}
					final.push_back(mk((make_pair(make_pair(i+1,j-c+2),make_pair(i+1,j+1))),minn));           
					c=0;
				}
			}
			else
			{
				if(c>1)
				{
					
					//count=count-c+1;
					
					minn=1000000000;
					for(k=j-c;k<=j-1;k++)
					{
						minn=min(minn,d[i][k]);
					}
					for(k=j-c;k<=j-1;k++)
					{
						d[i][k]=d[i][k]-minn;
						if(d[i][k]==0)
						{
							f[i][k]=0;
						}
					}
					final.push_back(mk((make_pair(make_pair(i+1,j-c+1),make_pair(i+1,j))),minn));           
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
				if(f[i][j]==1)
				{
					c++;
					if(i==n-1 && c>1)
					{
						
						//count=count-c+1;
						minn=1000000000;
						for(k=i-c+1;k<=i;k++)
						{
							minn=min(minn,d[k][j]);
							//mat[k][j]=0;
						}
						for(k=i-c+1;k<=i;k++)
						{
							
							d[k][j]=d[k][j]-minn;
							if(d[k][j]==0)
							{
								f[k][j]=0;
							}
						}
						final.push_back(mk((make_pair(make_pair(i-c+2,j+1),make_pair(i+1,j+1))),minn));           
						c=0;
					}
				}
				else
				{
					if(c>1)
					{
						           
						minn=1000000000;//count=count-c+1;
						for(k=i-c;k<=i-1;k++)
						{
							minn=min(minn,d[k][j]);
						}
						for(k=i-c;k<=i-1;k++)
						{
							d[k][j]=d[k][j]-minn;
							if(d[k][j]==0)
							{
								f[k][j]=0;
							}
						}
						final.push_back(mk((make_pair(make_pair(i-c+1,j+1),make_pair(i,j+1))),minn));
						c=0;
					}
					c=0;
				}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(d[i][j]!=0)
			final.push_back(mk(mk(mk(i+1,j+1),mk(i+1,j+1)),d[i][j]));
		}
	}

  
 	if(final.size()<count)
 	{
 		
	 	printf("%d\n",final.size());
		
		tr(final,it)
		{
			printf("%d %d %d %d %d\n",it->first.first.first,it->first.first.second,it->first.second.first,it->first.second.second,it->second);
		}
		
		
		/*for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(d[i][j]!=0)
				printf("%d %d %d %d %d\n",i+1,j+1,i+1,j+1,d[i][j]);    
			}
		}*/
	}
 	else
 	{
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
	 }
 	return 0;
 }
