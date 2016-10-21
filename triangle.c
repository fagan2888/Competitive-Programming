#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		if((x*x)==(y*y+z*z))
		{
			printf("RIGHT TRIANGLE\n");
		}
		else if((y*y)==(x*x+z*z))
		{
			printf("RIGHT TRIANGLE\n");
		}
		else if((z*z)==(y*y+x*x))
		{
			printf("RIGHT TRIANGLE\n");
		}
		else
		{
			printf("NOT RIGHT TRIANGLE\n");
		}
	}
	
return 0;
}
