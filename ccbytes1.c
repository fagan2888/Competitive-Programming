#include<stdio.h>
#include<string.h> 
int main()
{
	int n,q,i,num,j;
	scanf("%d%d",&n,&q);
	int com[n][100];
	memset(com,0,sizeof(com));
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(i==0)
		{
			com[i][num-1]++;
		}
		else
		{
			for(j=0;j<100;j++)
			{
				com[i][j]=com[i-1][j];
			}
			com[i][num-1]++;
		}
	}
	while(q--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x--;y--;
		if(x==0)
		{
			int count=0;
			for(j=0;j<100;j++)
			{
				if(com[y][j]!=0)
				count++;
			}
			printf("%d\n",count);
		}
		else
		{
			int count=0;
			for(j=0;j<100;j++)
			{
				if((com[y][j]-com[x-1][j])!=0)
				{
					count++;
				}
			}
			printf("%d\n",count);
		}
	}
return 0;
}
