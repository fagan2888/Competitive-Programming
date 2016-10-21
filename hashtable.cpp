#include<set>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector< vector<string> > vvs;


vvs H(20);


int key(char *n)
{
	char *t;
	int sum=0;
	for(t=n;*t!='\0';t++)
	{
		sum+=(int)*t;
	}
	return sum%20;
}



int main()
{
	char s[10][20],tmp[20],name1[20];
	vector<string> name2;
	int i,k,count=0;
	cout<<"enter ten names\n";
	for(i=0;i<10;i++)
	{
		cin>>s[i];
		k=key(s[i]);
		H[k].push_back(s[i]);
	}
	
	for(i=0;i<20;i++)
	{
		cout<<i+1<<"-  ";
		tr(H[i],it)
		{
			cout<<*it<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"enter a name to be searched 2 times\n";
	cin>>name1;
	name2.push_back(name1);
	k=key(name1);
	tr(H[k],it)
	{
		count++;
		
			cout<<"found at ";
			cout<<k;                        
	}	
	
return 0;
}
