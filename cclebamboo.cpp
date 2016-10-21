#include<stdio.h>
#include<algorithm>
#include<vector>
#define all(c) c.begin(),c.end()
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,count=0,flag=0,j;
		scanf("%d",&n);
		int h[n],d[n];
		vector<int> v(n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&h[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&d[i]);
		}
		
		for(i=0;i<n;i++)
		{
			v[i]=d[i]-h[i];
		}
		
		if(n==1)
		{
			if(d[0]>h[0])
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",h[0]-d[0]);
			}
			continue;
		}
		if(n==2)
		{
			if(v[0]==(-1*v[1]))
			{
				if(v[0]>v[1])
				printf("%d\n",v[0]);
				else
				printf("%d\n",v[1]);
			}
			else
			printf("-1\n");
			continue;
		}
		
		
		
		while(*(min_element(all(v)))!=0 || *(max_element(all(v)))!=0)
		{
			j=(min_element(all(v)))-v.begin();
			//printf("%d\n",j);
			//sort(all(v));
			v[j]+=1;
			for(i=0;i<n;i++)
			{
				if(i!=j)
				v[i]-=1;
			}
			count++;
			if(*(min_element(all(v)))<0 && *(max_element(all(v)))<0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
		/*for(i=0;i<n;i++)
		{
			printf("%d ",v[i]);
		}
		printf("\n");*/
			printf("-1\n");
		}
		else
		printf("%d\n",count);
	}
return 0;
}
