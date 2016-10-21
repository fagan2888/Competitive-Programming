#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int t[500000];
map<int,int> s;

int main()
{
	int n,k,i,count=10000000,time;
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if((t[i]<k) && ((k-t[i])!=t[i]))
		{
			//printf("%d ",k-t[i]);
			if(s.count(k-t[i])==0)
			s[k-t[i]]=i;
			else
			{
				if((n-i-1)<s[k-t[i]])
				{
					s[k-t[i]]=i;
				}
			}
		}
	}
	
	/*
	printf("\n");
	
	for(i=1;i<=2;i++)
	{
		printf("%d\n",s[i]);
	}
	*/
	for(i=0;i<n;i++)
	{
		if(s.count(t[i])!=0)
		{
			//printf("%d ",i);
			int tmp1,tmp2,tmp3,tmp4;
			tmp1=(max((i+1),(s[t[i]]+1)));
			tmp2=(max((i+1),(n-s[t[i]])));
			tmp3=(max((s[t[i]]+1),(n-i)));
			tmp4=(max((n-i),(n-s[t[i]])));
			
			time=min(min(tmp1,tmp2),min(tmp3,tmp4));
			if(time<count)
			count=time;
			
			//printf("%d\n",time);
		}
	}
	if(count!=10000000)
	printf("%d\n",count);
	else
	printf("-1\n");
return 0;
}
