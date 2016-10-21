#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int b,ls;
		float min,max;
		scanf("%d%d",&b,&ls);
		min=sqrt((ls*ls)-(b*b));
		max=sqrt((ls*ls)+(b*b));
		printf("%f %f\n",min,max);
	}
return 0;
}
