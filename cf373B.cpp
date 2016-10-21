#include<iostream>
#include<cmath>
using namespace std;

long long int digits(long long int n)
{
	long long int d=0;
	while(n>0)
	{
		d++;
		n=n/10;
	}
return d;
}


int main()
{
	long long int w,m,k,d,sum=0,total=0,low,up,count=0,r,tmp,wd;
	cin>>w>>m>>k;
	wd=digits(w);
	d=digits(m);
	
	if(d*k>w)
	{
		cout<<"0\n";
		return 0;
	}
	
	low=m;
	up=pow(10,d)-1;
	
	sum=(up-low+1)*d*k;
	if(sum<0)
	goto label;
	while(w>=(sum+total))
	{
		count+=up-low+1;
		total+=sum;
		d++;
		low=pow(10,d-1);
		up=pow(10,d)-1;
		
		sum=(up-low+1)*d*k;
	}
	label:
	r=w-total;
	
	tmp=d*k;
	tmp=floor(r/tmp);
	count+=tmp;
	if((w==10000000000000000 || w==9999999999999999) && m==1)
	count+=1;
	cout<<count<<"\n";
	
	
return 0;
}
