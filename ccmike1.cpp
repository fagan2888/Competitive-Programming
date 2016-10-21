#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long long int n,m,i,j,l,e1=0,e2=0,f1=0,f2=0,ans;
	scanf("%lld%lld",&n,&m);
	int mat[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%lld",&mat[i][j]);
		}
	}
	scanf("%lld",&l);
	long long int x[l],y[l];
	for(i=0;i<l;i++)
	{
		scanf("%lld%lld",&x[i],&y[i]);
		if(x[i]>n || x[i]<1)
		{
			e1=-1;
			f1=1;
		}
		
		if(y[i]>m || y[i]<1)
		{
			e1=-1;
			f1=1;
		}
		
		if(x[i]>m || x[i]<1)
		{
			e2=-1;
			f2=1;
		}
		
		if(y[i]>n || y[i]<1)
		{
			e2=-1;
			f2=1;
		}
		
		
	}
	
	//cout<<e1<<" "<<e2<<"\n";
	if(f1==0)
	{
		e1=0;
		for(i=0;i<l;i++)
		{
			e1+=mat[x[i]-1][y[i]-1];
		}
	}
	
	if(f2==0)
	{
		e2=0;
		for(i=0;i<l;i++)
		{
			e2+=mat[y[i]-1][x[i]-1];
		}
	}
	
	//cout<<e1<<" "<<e2<<"\n";
	ans=max(e1,e2);
	
	printf("%lld\n",ans);
	
return 0;
}
