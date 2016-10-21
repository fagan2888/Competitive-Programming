#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int pos(int x,int y,int n,int m,int a,int b)
{
	if((x==1 && y==m)||(x==1 && y==1)||(x==n && y==m)||(x==n && y==1))
	{
		return 0;
	}
	
	if(x<1 || x>n || y<1 || y>m)
	{
		return -1;        
	}
	cout<<x<<" "<<y<<"\n";
	int x1,x2,y1,y2,ans,t1,t2;
	x1=x-a;
	x2=x+a;
	y1=y-b;
	y2=y+b;
	if(x1<1)
	{
		x=x2;
	}
	else if(x2>n)
	{
		x=x1;
	}
	else
	{
		t1=min(x1-1,n-x1);
		t2=min(x2-1,n-x2);
		if(t1<t2)
		{
			x=x1;
		}
		else
		{
			x=x2;
		}
		
		
	}
	
	if(y1<1)
	{
		y=y2;
	}
	else if(y2>m)
	{
		y=y1;
	}
	else
	{
		t1=min(y1-1,m-y1);
		t2=min(y2-1,m-y2);
		if(t1<t2)
		{
			y=y1;
		}
		else
		{
			y=y2;
		}
	}
	
	ans=pos(x,y,n,m,a,b)+1;
	
	return ans;
}


int main()
{
	int n,m,i,j,a,b,p,q,r,s,ans;
	scanf("%d%d%d%d%d%d",&n,&m,&i,&j,&a,&b);
	
	if((i==1 && j==m)||(i==1 && j==1)||(i==n && j==m)||(i==n && j==1))
	{
		printf("0\n");
		return 0;
	}
	
	ans=pos(i,j,n,m,a,b);
	//ans=min(min(p,q),min(r,s));
	printf("%d\n",ans);
return 0;
}
