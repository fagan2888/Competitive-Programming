#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int i,n,root,tmp,diff=1000000000;
		scanf("%ld",&n);
		
		root=sqrt(n);
		if(root*root==n)
		{
			printf("0\n");
			continue;
		}
		
		for(i=1;i<=n/2;i++)
		{
			if((n/i)-i<0)
			break;
			if(n%i==0)
			{
				if(((n/i)-i)<diff)
				diff=(n/i)-i;
			}
		}
		
		printf("%ld\n",diff);
	}
	
return 0;	
}
