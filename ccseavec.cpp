#include<stdio.h>
#include<string.h>
#include<set>
#include<algorithm>
#include<vector>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)

using namespace std;

typedef pair<int,int> ii;

int isless(int s[],int a[],int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		if(s[i]>a[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,j,flag=0;
		scanf("%d%d",&n,&k);
		int sum[k],a[k],o[k],sumf[k];
		vector<int> v(k+1),tmp(k+1),tmp2(k+1),tmp3(k);
		set< vector<int> > s,f;
		set<ii> order;
		
		memset(sum,0,sizeof(sum));
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				scanf("%d",&v[j]);       
				sum[j]+=v[j];
				sumf[j]=sum[j];
			}
			v[j]=i+1;
			s.insert(v);
		}
		
		/*for(i=0;i<k;i++)
		{
			printf("%d ",sum[i]);
		}
		printf("\n");*/
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[j]);
			tmp3[j]=a[j];
			order.insert(ii(a[j],j+1));
			if(sum[j]>a[j])
			{
				flag=1;
			}
		}
		
		/*
		for(j=0;j<k;j++)
		printf("%d ",a[j]);
		printf("\n");
		*/
		if(flag==0)
		{
			printf("%d\n",n);
			for(i=1;i<=n;i++)
			printf("%d ",i);
			printf("\n");
			continue;
		}
		
		j=0;
		tr(order,it)
		{
			o[j]=(it->second);
			j++;
		}
		/*
		for(j=0;j<k;j++)
		printf("%d ",o[j]);
		printf("\n");
		*/
		
		tr(s,it)
		{
			tmp=*it;
			tmp2[k]=tmp[k];
			for(j=0;j<k;j++)
			{
				tmp2[o[j]-1]=tmp[j];
			}
			f.insert(tmp2);
		}
		
		for(j=0;j<k;j++)
		{
			a[o[j]-1]=tmp3[j];
		}
		
		for(j=0;j<k;j++)
		{
			sum[o[j]-1]=sumf[j];
		}
		
		
		
		
		
		while(!(isless(sum,a,k)))
		{
			typeof(f.end()) it=f.end();
			it--;
			tmp=*(it);
			f.erase(it);
			for(j=0;j<k;j++)
			{
				sum[j]=sum[j]-tmp[j];      
			}
		}
		/*for(i=n-1;i>=0;i--)
		{
			for(j=0;j<k;j++)
			{
				sum[j]=sum[j]-val[i][j];
			}
			if(isless(sum,a,k))
			{
				break;
			}
		}
		*/
		
		printf("%d\n",f.size());
		set<int> p;
		tr(f,it)
		{
			tmp=*it;
			p.insert(tmp[k]);
			
		}
		
		tr(p,it)
		{
			
			printf("%d ",*it);      
			
		}
		
		
		
		if(f.size()!=0)
		printf("\n");
		
		
		
	}
return 0;
}
