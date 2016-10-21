#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std; 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,p,q,res,tmp;
		long long int d,trunc;
		scanf("%lf%lf%lf%lld",&a,&p,&q,&d);
		tmp=(a/(1-a));
		res=(p*tmp)+((q*tmp)/(1-a));
		trunc=floor(res*pow(10,d));
		res=trunc;
		res=res/(pow(10,d));
		res=0;
		cout.setf(ios::fixed);
		cout<<setprecision(d)<<res<<"\n";
		
	}
return 0;
}
