#include <stdio.h>
int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int k,flag=0,leaves,stems=1;
		scanf("%d",&k);
		while (k--)
		{
			scanf("%d",&leaves);
			if(leaves>stems)
			{
				flag=1;
				break;
			}
			stems=(stems-leaves) * 2;
        }
		if (flag==1 || stems!=0)
		  printf("No\n");
		else
		  printf("Yes\n");
	}
	return 0;
} 
