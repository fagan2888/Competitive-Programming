#include<stdio.h>
#include<algorithm>
#include<set>
#include<vector> 
#include<map>
#define tr(c,it) for(;it!=c.end();it++)
#define gc getchar_unlocked()
using namespace std;
/*
typedef int LL;
LL in()
{
  char c;LL t=0;
  int negative=1;
  c=gc;
  
  while((c<48||c>57)&&c!='-')c=gc;
  if(c=='-')
  {negative=-1;c=gc;}
  while(c>=48&&c<=57)
  {t=(t<<3)+(t<<1)+c-'0';c=gc;}
  return t*negative;
}


int search(int *a,int item,int n)
{
	int beg,end,mid;
	beg=0;
	end=n-1;
	
	mid=(beg+end)/2;                       // Find Mid Location of Array
	
	while(beg<=end && a[mid]!=item)      // Compare Item and Value of Mid
	{
	if(a[mid]<item)
	beg=mid+1;
	else
	end=mid-1;
	
	mid=(beg+end)/2;
	}
	
	if(a[mid]==item)
	{
		return mid;
	}
	else
	{
		return -1;
	}

}

*/

int main()
{
	int n,k,p,i;
	scanf("%d%d%d",&n,&k,&p);
	//n=in();k=in();p=in();
	int A[n],B[n];
	map<int,int> m;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		m[A[i]]=1;
	}
	
	while(p--)
	{
		int x,y,index,maxx,minn,flag=0,a,b,save,pos;
		scanf("%d%d",&a,&b);
		//a=in();b=in();
		
		x = A[a-1];
		y = A[b-1];
		maxx=max(x,y);
		minn=min(x,y);
		x=minn;
		y=maxx;
		
		if(x==y)
		{
			printf("Yes\n");
			continue;
		}
		if(k==0 && x!=y)
		{
			printf("No\n");
			continue;
		}
		
		index=x;
		for(;index<y;)
		{
			flag=0;
			for(i=k;i>0;i--)
			{
				if(m[index+i]!=-1)
				{
					index+=i;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		
		
		if(index>=y)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
return 0;
}
