#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(4,4);
	vector<int> v2;
	v2.push_back(10);
	v2.push_back(11);
	v2.push_back(12);
	v2.push_back(13);
	vector<int> v3(v1+v2);
	for(int i=0;i<4;i++)
	{
		printf("%d\n",v3[i]);
	}
return 0;
}
