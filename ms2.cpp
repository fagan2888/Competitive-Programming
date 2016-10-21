#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int a[]={-2,-3,4,-1,-2,1,5,-3};
	
	int max_so_far=0;   
	int sum_range=0;    
	int i;
	
	for(i=0;i<8;i++)
	{
		sum_range=max(0,a[i]+sum_range);
		max_so_far=max(max_so_far,sum_range);
	}
	
	printf("%d\n",max_so_far);
	return 0;
}
