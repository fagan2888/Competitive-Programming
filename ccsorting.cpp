#include<stdio.h>
#include<vector>

using namespace std;
int count=0;
void sort(vector<int> v)
{
	vector<int> less,greater;
	if(v.size()<=1)
	{
		;
	}
	else
	{
	
		int pivot,i;
		pivot=v[((v.size()+1)/2)-1];
		for(i=0;i<v.size();i++)
		{
			count++;
			if(v[i]<pivot)
			{
				less.push_back(v[i]);
			}
			else if(v[i]>pivot)
			{
				greater.push_back(v[i]);
			}
		}
		sort(less);
		sort(greater);
	}
	
}

vector<int> a;
int main()
{
	int n,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		a.push_back(m);
	}
	sort(a);
	printf("%d\n",count);
	
return 0;
}
