#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,k,tmp;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&k);
		tmp=a[k-1];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==tmp)       
			{
				break;
			}
		}
		
		printf("%d\n",i+1);
	}
return 0;
}
