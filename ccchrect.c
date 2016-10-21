#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,k,i;
		scanf("%d%d%d",&n,&m,&k);
		if(n*m<=2)
		{
			printf("0\n");
			continue;
		}
		if(n==1 || m==1)
		{
			printf("%d\n",k);
	  		continue;
		}
		
		i=ceil((float)k/2);
		printf("%d\n",i);
	}
return 0;
}
