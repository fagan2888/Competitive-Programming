#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		
		long int cost[n],res=0,sum=0,total=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&cost[i]);
			res=(res^cost[i]);
			total+=cost[i];
		}
		
		if(res!=0)
		{
			printf("NO\n");
		}
		else
		{
			sort(cost,cost+n);
			sum=total-cost[0];  //using property of xor( if a^b^c^d^e^f=0 then a^b^c^d^e=f ) we have to minimize f(can be done by sorting)
			printf("%ld\n",sum);
		}
	}
return 0;
}
