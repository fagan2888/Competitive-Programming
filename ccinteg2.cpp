#include<iostream>
//#include<vector>
#include<algorithm>
long long int v[100000]={0};
//#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;
//vector<long long int> v;
int main()
{
	long long int n,x,i,a,cost=0,count=0,size=0,add=0;    //,count_neg=0,,neg_max=-1000000001;
	scanf("%lld",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a);
		if(a<0)
		{
			/*if(neg_min>a)
			neg_min=a;*/
			v[size]=a;
			size++;
		}
		
	}
	scanf("%lld",&x);
	
	if(size>x)
	{
		sort(v,v+size);
		cost=(v[x]*x*-1);
		add=(-1*v[x]);
		//printf("cost=%d\n",cost);
		for(i=0;i<size;i++)
		{
			v[i]=v[i]+add;
			//printf("%d ",v[i]);
		}
		//printf("\n"); 
	}
	for(i=0;i<size;i++)
	{
		if(v[i]<0)
		{
			cost+=(0-v[i]);
			//printf("cost=%d\n",cost);
		}
	}
	
	printf("%lld\n",cost);
	
	
return 0;
} 
