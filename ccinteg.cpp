#include<iostream>
#include<vector>
#include<algorithm>

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;
vector<long long int> v;
int main()
{
	long long int n,x,i,a,cost=0,count=0;//,count_neg=0,neg_min=0,neg_max=-1000000001;
	scanf("%lld",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a);
		if(a<0)
		{
			v.push_back(a);
		}
		
	}
	scanf("%lld",&x);
	sort(v.begin(),v.end());
	
	while(v.size()>0)
	{
		if(v.size()<x)
		{
			cost+=v.size();
			count++;
		}
		else
		{
			cost+=x;
			count++;
		}
		
		while(v[v.size()-1]+count>=0 && v.size()>0)
		{
			v.erase(v.end()-1);
		}
		/*tr(v,it)
		{
			printf("%lld ",*it);
		}
		printf("\n");*/
	}
	
	printf("%lld\n",cost);
	
	
return 0;
}
