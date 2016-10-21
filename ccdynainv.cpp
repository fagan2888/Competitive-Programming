#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,q,i;
	scanf("%d%d",&n,&q);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(q--)
	{
		int x,y,count=0,i,j;
		scanf("%d%d",&x,&y);
		swap(a[x-1],a[y-1]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					if(count==0)
					{
						count=1;
					}
					else
					{
						count=0;
					}
				}
			}
		}
		printf("%d\n",count);
	}
return 0;
}

