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
		char name[n][7];
		int num[n],num2[n];
		for(i=0;i<n;i++)
		{
			scanf("%s",name[i]);
			scanf("%d",&num[i]);
			getchar();
			num2[i]=num[i];
		}/*
		for(i=0;i<n;i++)
		{
				printf("%d ",num[i]);   
			
		}
		printf("\n");*/
		sort(num,num+n);/*
		for(i=0;i<n;i++)
		{
				printf("%d ",num[i]);   
			
		}
		printf("\n");*/
		if(n==1)
		{
			printf("%s\n",name[0]);
			continue;
		}
		
		if(num[0]!=num[1])
		{
			flag=1;
			ans=num[0];
			goto label;
		}
		
		for(i=1;i<n;i++)
		{
			if(num[i]==num[i-1])
			{
				continue;
			}
			else
			{
				if(i<n-1)
				{
					if(num[i]==num[i+1])
					{
						continue;
					}
					else
					{
						flag=1;
						ans=num[i];
						break;
					}
				}
				else
				{
						flag=1;
						ans=num[i];
						break;
				}
			}
		}
		
		label:
		if(flag==0)
		{
			printf("Nobody wins.\n");
			continue;
		}
		//printf("%d\n",ans);
		for(i=0;i<n;i++)
		{
			if(ans==num2[i])
			{
				printf("%s\n",name[i]);
				break;
			}
		}
		
	}
return 0;
}
