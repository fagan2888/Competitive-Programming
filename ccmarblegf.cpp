#include<stdio.h>
#include<iostream>
#include<set>

using namespace std;
typedef pair<int,int> ii;
int a[1000000]={0};
long long int sum[1000000]={0};
set<ii> s;
int main()
{
	long long int n,q,i;
	scanf("%lld%lld",&n,&q);
	

	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		
	
		if(i==0)
		sum[i]=a[i];
		else
		sum[i]=sum[i-1]+a[i];
	}
	
	while(q--)
	{
		char ch;
		long long int i,j,total=0;
		cin>>ch>>i>>j;
		if(ch=='S')
		{
			if(i==0)
			total=sum[j];
			else
			total=sum[j]-sum[i-1];
			
			s.insert(ii(i,-1000000000));
			typeof(s.begin()) it=s.find(ii(i,-1000000000));
			typeof(s.begin()) it2=it;
			it++;
			while(it->first<=j && it!=s.end())
			{
				total+=it->second;
				it++;
			}
			s.erase(it2);
			
			printf("%lld\n",total);
		}
		else if(ch=='G')
		{
			
			s.insert(ii(i,j));
			a[i]+=j;
		}
		else
		{
			a[i]-=j;
			s.insert(ii(i,-j));
		}
		
		
	}
	
return 0;
}
