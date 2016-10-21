#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,s,e,curr_max,max_sofar,j,tmp,flag=0,tmp2;
		long long int sum=0,postotal=0;
		scanf("%d%d",&n,&k);
		int a[n];
		long long int asum[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>0)
			postotal+=a[i];
			
			if(i==0)
			asum[i]=a[i];
			else
			asum[i]=asum[i-1]+a[i];
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d ",asum[i]);
		}
		printf("\n");
		
		s=0;
		e=n-(k+1)-1;
		curr_max=a[s];
		max_sofar=a[s];
		j=s;
		for(i=s+1;i<=e;i++)
		{
			
			curr_max=max(a[i],curr_max+a[i]);
			tmp=max_sofar;
			max_sofar=max(max_sofar,curr_max);
			if(max_sofar==curr_max)
			{
				if(tmp!=max_sofar)
				j=i;
			}
		}
		sum+=max_sofar;
		tmp2=sum;
		s=j+k+1;
		e=n-1;
		//printf("%lld\n",sum);
		curr_max=a[s];
		max_sofar=a[s];
		j=s;
		for(i=s+1;i<=e;i++)
		{
			curr_max=max(a[i],curr_max+a[i]);
			max_sofar=max(max_sofar,curr_max);

		}
		sum+=max_sofar;
		if(sum<tmp2 && k==0)
		sum=tmp2;
		printf("%lld\n",sum);
	}
return 0;
}
