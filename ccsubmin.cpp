#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,sum=0,size;
	scanf("%d",&n);
	size=(n*(n+1))/2;
	int a[n],pre[size];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			pre[sum]=*min_element(a+i,a+j+1);
			sum++;
		}
	}
	/*
	for(i=0;i<size;i++)
	{
		printf("%d ",pre[i]);
	}
	printf("\n");
	*/
	int q;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		int k,j,count=0;
		scanf("%d",&k);
		for(j=0;j<size;j++)
		{
			if(pre[j]==k)
			count++;
		}
		printf("%d\n",count);
	}
return 0;
}
