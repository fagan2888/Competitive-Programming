#include<stdio.h>
#include<string.h>
char matrix[50][51];

int check(int i,int j)
{
	int flag=0;
	if((matrix[i-1][j]=='^' && matrix[i-2][j]=='^')
		&&(matrix[i+1][j]=='^' && matrix[i+2][j]=='^')
		&&(matrix[i][j-1]=='^' && matrix[i][j-2]=='^')
		&&(matrix[i][j+1]=='^' && matrix[i][j+2]=='^'))
	{
		flag=1;
	}
	return flag;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(matrix,' ',sizeof(matrix));
		int r,c,i,flag=0,s,rend,cend,j,k,count=0;
		scanf("%d%d",&r,&c);
		
		for(i=0;i<r;i++)
		{
			scanf("%s",matrix[i]);
		}
		
		if(r<=4 || c<=4 )
		{
			printf("0\n");
			continue;
		}
		else
		{
			s=3;
			rend=r-2;
			cend=c-2;
			
			for(i=s;i<=rend;i++)
			{
				for(j=s;j<=cend;j++)
				{
					if(matrix[i-1][j-1]=='^')
					{
						flag=check(i-1,j-1);
						if(flag==1)
						{
							count++;
						}
					}
				}
			}
			printf("%d\n",count);
			
		}
	}
return 0;
}
