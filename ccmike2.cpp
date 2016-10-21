#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>        
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
typedef pair<int,int> ii;
typedef set< pair<ii,int> > siii;


struct pp
{
	long long int aa;
	long long int bb;
};

int compare(const void *a, const void *b)
{
	const struct pp *ia = (const struct pp *)a; // casting pointer types 
    const struct pp *ib = (const struct pp *)b;
	return (ia->aa)-(ib->aa);
}
int compare2(const void *a, const void *b)
{
	const struct pp *ia = (const struct pp *)a; // casting pointer types 
    const struct pp *ib = (const struct pp *)b;
	return (ia->bb)-(ib->bb);
}



int main()
{
	long long int n,x,i,s,f,sum=0,flag=0,j,pos,hsum=0;
	scanf("%lld%lld",&n,&x);
	long long int a[n],b[n],c[n];
	struct pp d[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=ceil(a[i]/2.0);
		c[i]=a[i]-b[i];
		sum+=a[i];
		hsum+=b[i];
		
		d[i].aa=b[i];
		d[i].bb=c[i];
		
	}

	if(x>=sum)
	{
		printf("0 %lld",n);
		return 0;
	}
	
	if(x>=hsum)
	{
		sort(c,c+n);
		x=x-hsum;
		s=0;
		for(i=0;i<n;i++)
		{
			if(x<c[i])
			{
				break;
			}
			x=x-c[i];
			s++;
		}
		printf("0 %d\n",s);
		return 0;
	}
	
	
	
	
	/*
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				swap(b[j],b[j+1]);
				swap(c[j],c[j+1]);
			}
		}
	}*/
	for(i=0;i<n;i++)
	{
		printf("%lld %lld\n",d[i].aa,d[i].bb);
	}
	printf("\n");
	
	qsort(d,n,sizeof(int),compare);
	
	for(i=0;i<n;i++)
	{
		printf("%lld %lld\n",d[i].aa,d[i].bb);
	}
	
	f=n;s=0;
	for(i=0;i<n;i++)
	{
		if(x<d[i].aa)
		{
			pos=i;
			flag=1;
			break;
		}
		x=x-d[i].aa;
		f--;
	}
	
	
	qsort(d,pos+1,sizeof(int),compare2);

	for(i=0;i<pos;i++)
	{
		if(x<d[i].bb)
		{
			break;
		}
		x=x-d[i].bb;
		s++;
	}
	
	printf("%lld %lld\n",f,s);
	
return 0;
}

