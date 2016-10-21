#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,num;
		scanf("%d",&n);
		char s[n+1];
		scanf("%s",s);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			swap(s[i],s[num-1]);
		}
		printf("%s\n",s);
	}
return 0;
}
