#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d %d\n",max(a,b),a+b);
	}
return 0;
}
