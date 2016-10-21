#include<stdio.h>
#define min(a,b) a<b?a:b
int max(int a, int b, int c,int d)
{
	int m;
	m=((a>b?a:b)>c)?(a>b?a:b):c;
	if(m<d)
	{
		m=d;
	}
	return m;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,k,posr,posc;
		scanf("%d",&n);
		getchar();
		char board[n][n+1];
		int catch[n][n];
		//int org[n][n];
		memset(catch,0,sizeof(int)*n*n);
	//	memset(org,0,sizeof(int)*n*n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n+1;j++)
			{
				scanf("%c",&board[i][j]);
				if(board[i][j]=='K')
				{
					posr=i;posc=j;  //position of knight
				}
				if(board[i][j]=='P')
				{
					catch[i][j]=1;
				//	org[i][j]=1;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d ",catch[i][j]);
		}
		printf("\n");
		}
		printf("\n");
		
		if(posc==n-1)
		{
			printf("0\n");
			continue;
		}
		
		j=posc;
		for(i=0;i<n;i++)
		{
			catch[i][j]=0;
		}
		
		j=posc+1;
		
		for(i=0;i<n;i++)
		{
			if((i-2==posr && j-1==posc) || (i+2==posr && j-1==posc))
			{
			}
			else
			{
			    catch[i][j]=0;
			}
		}
	
		for(j=posc+2;j<n;j++)
		{
			for(i=0;i<n;i++)
			{
				if(i+2<n && i-2>=0 && j-2>=posc)
				{
						catch[i][j]+=max(catch[i+2][j-1],catch[i+1][j-2],catch[i-2][j-1],catch[i-1][j-2]);
				}
				else if(i-1>=0 && i+2<n && j-2>=posc)
				{
						catch[i][j]+=max(catch[i+2][j-1],catch[i+1][j-2],catch[i-1][j-2],0);
				}
				else if(i+1<n && i-2>=0 && j-2>=posc)
				{
						catch[i][j]+=max(catch[i+1][j-2],catch[i-2][j-1],catch[i-1][j-2],0);
				}
				else if(i+2<n && i-2>=0 && j-1>=posc)
				{
						catch[i][j]+=max(catch[i+2][j-1],catch[i-2][j-1],0,0);
				}
				else if(i+2<n && i-1<0 && j-2>=posc)
				{
						catch[i][j]+=max(catch[i+2][j-1],catch[i+1][j-2],0,0);
				}	
				else if(i+1>=n && i-2>=0 && j-2>=posc)
				{
						catch[i][j]+=max(0,0,catch[i-2][j-1],catch[i-1][j-2]);
				}
				else if(i+2>=n && j-2<posc)
				{
					catch[i][j]+=max(catch[i-2][j-1],0,0,0);
				}
				else if(i-2<0 && j-2<posc)
				{
					catch[i][j]+=max(catch[i+2][j-1],0,0,0);
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d ",catch[i][j]);
		}
		printf("\n");
		}
		printf("%d\n",catch[posr][posc]);
		
	}
return 0;
}
