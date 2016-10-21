#include<stdio.h>
#include<vector>
#include<algorithm>
#define vector<int> vi;
#define set<int> si;
using namespace std;

int main()
{
	int n,i,count;
	scanf("%d",&n);
	vi a[n];
	si s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=a[i];
	}
	printf("%d\n",s.size());
	for(i=n;i>0;i--)
	{
		printf("%d %d\n",i,i);
	}
return 0;
	
}
