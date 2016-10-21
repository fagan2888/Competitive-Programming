#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n1,m1,n2,m2;
		char ch;
		double t1,t2,dist,ans1,ans2;
		scanf("%d%c%d",&n1,&ch,&m1);
		scanf("%d%c%d",&n2,&ch,&m2);
		scanf("%lf",&dist);
		
		t1=(n1*60)+m1;
		t2=(n2*60)+m2;
		
		
		ans1=dist+(t1-t2);
			
		if(t1-t2>(2*dist))
		{
			ans2=t1-t2;
		}
		else
		{
			ans2=dist+(t1-t2)/2;
		}
		
		printf("%.1lf %.1lf\n",ans1,ans2);
		//printf("%d %c %d ",n1,ch,m1);
	}
return 0;
}
