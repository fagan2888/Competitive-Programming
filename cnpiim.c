#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int trace,i,j,k,count=0;
		scanf("%d",&trace);
		for(i=1;i<=(trace/2);i++)
		{
			for(j=1;j<(trace-1);j++)
			{
				for(k=1;k<=j;k++)
				{
					if((j*k)>=(i*(trace-i)))
					{
						break;
					}
					else
					{
						if(i!=(trace-i))
						{
							if(j!=k)
							{
								count+=4;
							}
							else
							{
								count+=2;
							}
						}
						else
						{
							if(j!=k)
							{
								count+=2;
							}
							else
							{
								count+=1;
							}
						}
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
