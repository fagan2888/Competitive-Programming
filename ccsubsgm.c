#include<stdio.h>

int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max_len=1;
	int curr_len=1;
	for(i=1;i<n;i++)
	{
		if(a[i]==(a[i-1]+1))
		{
			curr_len++;
			if(max_len<curr_len)
			{
				max_len=curr_len;
			}
		}
		else
		{
			curr_len=1;
		}
	}
	printf("%d\n",max_len);
	while(m--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		a[x-1]=y;
		max_len=1;
		curr_len=1;
		for(i=1;i<n;i++)
		{
			if(a[i]==(a[i-1]+1))
			{
				curr_len++;
				if(max_len<curr_len)
				{
					max_len=curr_len;
				}
			}
			else
			{
				curr_len=1;
			}
		}
		printf("%d\n",max_len);
	}
return 0;
}
