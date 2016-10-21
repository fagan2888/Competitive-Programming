#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v;
vector<int> a;
int f(int x,int s,int n)
{
	int i,sum=0,flag=0;
	if(a[v[x]]>s)
	{
		return s;
	}
	
	for(i=x;i<n;i++)
	{
		sum+=a[v[i]];
		if(sum>s)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		sum-=a[v[i]];
	}
	//printf("%d ",s-sum);
	return (s-sum);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,s,i,flag=0,min=1000000000,sum=0,pr=0;
		scanf("%lld%lld%lld",&n,&k,&s);
		v.resize(n);
		//vector<int> v2(n);
		a.resize(n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			v[i]=i+1;
		}/*
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");*/
		do
		{	
			sum=0;
			for(i=0;i<n;i++)
			{
				sum+=f(i,s,n);
			}
			
			//printf(" %d\n",sum);
			if(sum<min)
			{
				min=sum;
			
				if(pr==0)
				pr=1;
				else
				{
					for(i=0;i<n;i++)
					{
						printf("%d ",v[i]);
					}
					printf("\n");
					break;
				}
			}
		}while(next_permutation(v.begin(),v.end()));
		 
		 if(pr==0)
		 {
		 	for(i=0;i<n;i++)
					{
						printf("%d ",v[i]);
					}
					printf("\n");
					
		 	
		 }
	}
return 0;
}
