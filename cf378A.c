#include<stdio.h>
#define abs(x) ((x)<0?-1*(x):(x))
int main()
{
	int n,m,a=0,b=0,c=0,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=6;i++)
	{
		if(abs(n-i)<abs(m-i))
		{
			a++;
		}
		else if(abs(n-i)>abs(m-i))
		{
			c++;
		}
		else
		{
			b++;
		}
	}
	
	printf("%d %d %d\n",a,b,c);
return 0;
}
