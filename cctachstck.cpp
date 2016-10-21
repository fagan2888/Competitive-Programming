#include<stdio.h>
#include<algorithm>
using namespace std;

//int freq[1000000001]={0};

int main()
{
	int n,d,i,count=0;
	scanf("%d%d",&n,&d);
	int l[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&l[i]);
	}
	
	sort(l,l+n);
	for(i=1;i<n;i++)
	{
		if(l[i]-l[i-1]<=d)
		{
			count++;
			i++;
		}
	}
	
	
	printf("%d\n",count);
return 0;
}
