#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,q,i;
		scanf("%d",&n);
		int s[n][n+1];
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}
		scanf("%d",&q);
		for(i=0;i<q;i++)
		{
			int a,b,count=0;
			scanf("%d%d",&a,&b);
			if(s[a][b]=='Y')
			{
				printf("1\n");
			}
			else
			{
				count++;
				i=a;
				while(s[i][b]!='Y')
				{
				
				for(i=0;i<n;i++)
				{
					if(i!=a)
					{
						if(s[a][i]=='Y')
						{
							count++;
							if(s[i][b]=='Y')
							{
								break;
							}
							else
							{
								a=i;
								
							}
						}
					}
				}
				}
			}
			printf("%d\n",count);
		}
	}
return 0;
}
