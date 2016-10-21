#include<stdio.h>
#include<string.h>
#include<math.h>
#define max(a,b) (a)>(b)?(a):(b)
int black[100][2]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(black,0,sizeof(black));
		int n,m,c2,c3,i,j,countb=0,countw=0,swap=0;
		scanf("%d%d%d%d",&n,&m,&c2,&c3);
		char s[n][m+1];
		int k=0;
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j]=='B')
				{
					countb++;
					black[k][0]=i;
					black[k][1]=j;
					k++;
				}
				else
				countw++;
			}
		}
		for(i=0;i<k-1;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(i!=j)
				{
				
				if(black[i][0]==black[j][0])
				{
					swap+=abs(black[i][1]-black[j][1])-1;
				}
				else if(black[i][1]==black[j][1])
				{
					swap+=abs(black[i][0]-black[j][0])-1;
				}
				//printf("swap=%d\n",swap);
				}
			}
			
		}
		//printf("swap=%d\n",swap);
		if(swap<(countb*c3) && swap<(countw*c2))
		{
			printf("%d\n",swap);
			for(i=1;i<k;i++)
			{
				if(black[i][0]==black[0][0])
				{
					while((black[i][1]-black[0][1])!=1)
					{
						printf("1 %d %d %d %d",black[i][0],black[i][1],black[0][0],black[i][1]-1);
						black[i][1]--;
					}
				}
				else if(black[i][1]==black[0][1])
				{
					while((black[i][0]-black[0][0])!=1)
					{
						printf("1 %d %d %d %d",black[i][0],black[i][1],black[i][0]-1,black[i][1]);
						black[i][0]--;
					}
				}
				else
				{
					
				}
			}
		}
		else
		{
		
		if(countb*c3<countw*c2)
		{
			printf("%d\n",countb);
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(s[i][j]=='B')
					{
						printf("3 %d %d\n",i+1,j+1);
					}
				}
			}
		}
		else
		{
			printf("%d\n",countw);
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					if(s[i][j]=='W')
					{
						printf("2 %d %d\n",i+1,j+1);
					}
				}
			}
		}
		}
	}
return 0;
}
