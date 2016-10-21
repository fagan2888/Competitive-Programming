#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,i,curr_max,max_sofar,m=0;
		
		scanf("%lld%lld",&n,&k);
		long long int a[n],subleft[n],subright[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		m=a[0]+a[n-1];
		curr_max=a[0];
		max_sofar=a[0];
		subleft[0]=max_sofar;
		for(i=1;i<=n-(k+2);i++)
		{
			curr_max=max(a[i],curr_max+a[i]);
			max_sofar=max(max_sofar,curr_max);
			subleft[i]=max_sofar;
		}
		
		curr_max=a[n-1];
		max_sofar=a[n-1];
		subright[n-1]=max_sofar;
		for(i=n-2;i>k;i--) 
		{
			curr_max=max(a[i],curr_max+a[i]);
			max_sofar=max(max_sofar,curr_max);
			subright[i]=max_sofar;
		}
		//printf("%d %d\n",subleft[0],subright[0]);
		for(i=0;i<=n-(k+2);i++)
		{
			m=max(m,subleft[i]+subright[i+k+1]);
		}
		printf("%lld\n",m);
	}
return 0;
}
