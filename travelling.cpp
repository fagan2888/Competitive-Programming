#include<iostream>
using namespace std;

int main()
{
int i,n=8,j;
int value[8]={11,30,5,35,48,18,98,62};
int s[]={1,1,4,6,5,8,9,4};
int f[]={4,9,9,12,8,11,14,6};

int opt[8]={0},p[8]={0};

for(i=1;i<n;i++)
{
	for(j=i-1;j>=0;j--)
	{
		if(f[j]<=s[i])
		{
			p[i]=j;
			break;
		}
	}
}

for(j=0;j<n;j++)
{
	if(j==0)
	opt[j]=0;
	else
	{
		opt[j]=(value[j]+opt[p[j]]) > opt[j-1] ? (value[j]+opt[p[j]]) : opt[j-1];
	}
}

cout<<"Solution is "<<opt[n-1];
return 0;
}
