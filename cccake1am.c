#include<stdio.h>
#include<string.h>
#define abs(x) (x)<0?(-1*(x)):(x)
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x[4],y[4],a1,a2,a3=0,ans;
		scanf("%d%d%d%d",&x[0],&y[0],&x[1],&y[1]);
		scanf("%d%d%d%d",&x[2],&y[2],&x[3],&y[3]);
		
		a1=(abs(x[1]-x[0]))*(abs(y[1]-y[0]));
		a2=(abs(x[3]-x[2]))*(abs(y[3]-y[2]));
		
		if(x[0]>=x[3] || x[2]>=x[1] || y[0]>=y[3] || y[2]>=y[1])
		{
			a3=0;
		}
		else
		{
			int x1,x2,y1,y2;
			if(x[2]<=x[0])
			{
				x1=x[0];
			}
			else if(x[0]<=x[2])
			{
				x1=x[2];
			}
			
			if(x[1]<=x[3])
			{
				x2=x[1];
			}
			else if(x[3]<=x[1])
			{
				x2=x[3];
			}
			
			if(y[2]<=y[0])
			{
				y1=y[0];
			}
			else if(y[0]<=y[2])
			{
				y1=y[2];
			}
			
			if(y[1]<=y[3])
			{
				y2=y[1];
			}
			else if(y[3]<=y[1])
			{
				y2=y[3];
			}
			a3=(abs(x1-x2))*(abs(y1-y2));
		}
		/*printf("%d\n",a1);
		printf("%d\n",a2);
		printf("%d\n",a3);*/
		ans=a1+a2-a3;
		printf("%d\n",ans);
	}
return 0;
}
