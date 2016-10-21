#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("%d won\n",i+1);
		}
		else
		printf("%d lost\n",i+1);
	}
return 0;
}
