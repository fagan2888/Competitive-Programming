#include<stdio.h>
#define max(a,b) a>b?a:b
 
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
		int org[n][n];
		memset(catch,0,sizeof(int)*n*n);
		memset(org,0,sizeof(int)*n*n);
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
					org[i][j]=1;
				}
			}
		}
		
		/*for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d ",catch[i][j]);
		}
		printf("\n");
		}
		printf("\n");
		*/
		for(j=n-1;j>posc;j--)
		{
			for(i=n-1;i>=0;i--)
			{
				if(board[i][j]=='P')
				{
				
				if(i+2<n && i-2>=0 && j-2>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i+2][j-1]=max(catch[i+2][j-1],/*catch[i+2][j-1]+*/catch[i][j])+org[i+2][j-1];
						catch[i+1][j-2]=max(catch[i+1][j-2],/*catch[i+1][j-2]+*/catch[i][j])+org[i+1][j-2];
						catch[i-2][j-1]=max(catch[i-2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i-2][j-1];
						catch[i-1][j-2]=max(catch[i-1][j-2],/*catch[i-1][j-2]+*/catch[i][j])+org[i-1][j-2];
					}
				}
				else if(i-1>=0 && i+2<n && j-2>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i+2][j-1]=max(catch[i+2][j-1],/*catch[i+2][j-1]+*/catch[i][j])+org[i+2][j-1];
						catch[i+1][j-2]=max(catch[i+1][j-2],/*catch[i+1][j-2]+*/catch[i][j])+org[i+1][j-2];
						catch[i-1][j-2]=max(catch[i-1][j-2],/*catch[i-1][j-2]+*/catch[i][j])+org[i-1][j-2];
					}
				}
				else if(i+1<n && i-2>=0 && j-2>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i-2][j-1]=max(catch[i-2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i-2][j-1];
						catch[i+1][j-2]=max(catch[i+1][j-2],/*catch[i+1][j-2]+*/catch[i][j])+org[i+1][j-2];
						catch[i-1][j-2]=max(catch[i-1][j-2],/*catch[i-1][j-2]+*/catch[i][j])+org[i-1][j-2];
					}
				}
				else if(i+2<n && i-2>=0 && j-1>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i+2][j-1]=max(catch[i+2][j-1],/*catch[i+2][j-1]+*/catch[i][j])+org[i+2][j-1];
						catch[i-2][j-1]=max(catch[i-2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i-2][j-1];
					}
				}
				else if(i+2<n && i-1<0 && j-2>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i+2][j-1]=max(catch[i+2][j-1],/*catch[i+2][j-1]+*/catch[i][j])+org[i+2][j-1];
						catch[i+1][j-2]=max(catch[i+1][j-2],/*catch[i+1][j-2]+*/catch[i][j])+org[i+1][j-2];
					}
				}	
				else if(i+1>=n && i-2>=0 && j-2>=posc)
				{
					//(board[i][j]=='P')
					{
						catch[i-2][j-1]=max(catch[i-2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i-2][j-1];
						catch[i-1][j-2]=max(catch[i-1][j-2],/*catch[i-1][j-2]+*/catch[i][j])+org[i-1][j-2];
					}
				}
				else if(i+2>=n && j-2<posc)
				{
					catch[i-2][j-1]=max(catch[i-2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i-2][j-1];
				}
				else if(i-2<0 && j-2<posc)
				{
					catch[i+2][j-1]=max(catch[i+2][j-1],/*catch[i-2][j-1]+*/catch[i][j])+org[i+2][j-1];
				}
				}
			}
		}
		
		/*for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
			printf("%d ",catch[i][j]);
		}
		printf("\n");
		}*/
		printf("%d\n",catch[posr][posc]);
		
	}
return 0;
}
