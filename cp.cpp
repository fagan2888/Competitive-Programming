#include<stdio.h>
#include<cmath>
#include<cstring>
using namespace std;
bool prime[1000000001];
 
void precompute()
{
	long long int i,root,j;
	root=sqrt(1000000000)+1;
	prime[1]=true;
	prime[2]=false;
	for(i=3;i<=root;i=i+2)
	{
		if(prime[i]==false)
		{
			for(j=i*i;j<=1000000000;j+=(2*i))
			{
				prime[j]=true;
			}
		}
	}
 
}
 
int main()
{
	int t;
	memset(prime,false,sizeof(prime));
	scanf("%d",&t);
	precompute();
	while(t--)
	{
	
		long long int n,m,i,count=0;
		scanf("%lld%lld",&n,&m);
		if((n==1 && m!=1))
		{
			count++;
			printf("2\n");
			n=3;
		}
		if(n%2==0)
		n+=1;
		for(i=n;i<=m;i=i+2)
		{
			if(prime[i]==false)
			{
				count++;
			}
		}
		printf("%d\n",count);
	
	}
return 0;
} 
