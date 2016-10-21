#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		
		long int cost,res=0,sum=0,total=0,min=10000000;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&cost);
			res=(res^cost);
			total+=cost;
			if(min>cost)
			{
				min=cost;
			}
		}
		
		if(res!=0)
		{
			printf("NO\n");
		}
		else
		{
			sum=total-min;    //using property of xor( if a^b^c^d^e^f=0 then a^b^c^d^e=f ) we have to minimize f
			printf("%ld\n",sum);
		}
	}
return 0;
}
