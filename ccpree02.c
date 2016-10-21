#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,k=7,count=0,root,tmp,r;
		scanf("%d",&n);
		root=ceil(sqrt(n));
		for(i=1;i<=root;i++)
		{
			if(n%i==0)
			{
				tmp=i;
				while(tmp>0)
				{
					r=tmp%10;
					if(r==3 || r==5 || r==6)
					{
						count++;
						break;
					}
					tmp=tmp/10;
				}
				tmp=n/i;
				while(tmp>0)
				{
					r=tmp%10;
					if(r==3 || r==5 || r==6)
					{
						count++;
						break;
					}
					tmp=tmp/10;
				}
			}
		}
		printf("%d\n",count);
	}
return 0;
}
