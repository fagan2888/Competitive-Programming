#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>
#include<functional>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define all(c) c.begin(),c.end()
using namespace std;


vector< vector<int> > k(100001);

int main()
{
	int n,q,j;
	scanf("%d%d",&n,&q);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<=sqrt(a[i]);j++)
		{
			if(a[i]%j==0)
			{
				k[j].push_back(i);
				if(a[i]/j!=j)
				k[a[i]/j].push_back(i);
			}
		}
	}
	
	/*for(i=1;i<13;i++)
		{
			printf("%d ",i);
			tr(k[i],it)
			{
				printf("%d ",*it);
			}
			printf("\n");
		}
	*/
	while(q--)
	{
		int l,r,j,ans;
		scanf("%d%d%d",&l,&r,&j);
		l--;
		r--;
		
		vector<int>::iterator x,y;
		x=lower_bound(all(k[j]),l);
		y=upper_bound(all(k[j]),r);
		
		printf("%d\n",y-x);	
	}	
return 0;
}
