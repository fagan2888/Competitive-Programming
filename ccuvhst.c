#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c,ans=0;
		scanf("%d%d",&n,&c);
		if(n>=c)
		{
			ans=n/c;
			ans--;
		}
		printf("%d\n",ans);
	}
return 0;
}
