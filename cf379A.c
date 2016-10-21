#include<stdio.h>

int main()
{
	int a,b,tmp,r,q;
	scanf("%d%d",&a,&b);
	int ans;
	
	ans=a;
	tmp=a/b;
	r=a%b;
	while(tmp>0)
	{
		ans+=tmp;
		q=tmp;
		tmp=(tmp+r)/b;
		r=(q+r)%b;
	}
	
	printf("%d\n",ans);
return 0;
}
