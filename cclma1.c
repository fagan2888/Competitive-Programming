#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,p,q,res,tmp;
		int d;
		scanf("%lf%lf%lf%d",&a,&p,&q,&d);
		tmp=(a/(1-a));
		res=(p*tmp)+((q*tmp*tmp)/a);
		
		printf("%lf\n",res);
		
	}
return 0;
}
