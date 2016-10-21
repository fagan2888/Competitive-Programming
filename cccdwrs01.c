#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int r;
		double a;
		scanf("%lld",&r);
		a=sqrt(2*r*r);
		printf("%lf\n",a);
	}
return 0;
}
