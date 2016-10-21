#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std; 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,flag=0,ans;
		scanf("%d",&n);
		getchar();
		char name[n][6];
		int a[10]={0},num[n];
		for(i=0;i<n;i++)
		{
			scanf("%s",name[i]);
			scanf("%d",&num[i]);
			getchar();
			a[num[i]-1]++;
		}
		
		
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				ans=i+1;
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("Nobody wins.\n");
			continue;
		}
		for(i=0;i<n;i++)
		{
			if(ans==num[i])
			{
				printf("%s\n",name[i]);
				break;
			}
		}
	}
return 0;
}
