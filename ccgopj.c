#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,b,i,ans=0,a;
		float root;
		scanf("%d%d",&n,&b);
		root=sqrt(1+8*b);
		i=ceil(root);
		ans=floor(root);
		if(i==ans || ans%2==1)
		{
			a=n*(n+1);
			a=a/2;
			if(a>b)
			{
				a--;
			}
			
		}
		else
		{
			a=n*(n+1);
			a=a/2;
		}
		printf("%d\n",a);
	}
return 0;
}
