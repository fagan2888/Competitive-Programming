#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int start[8],finish[8],i,j,min,count=1;
	for(i=0;i<8;i++)
	{
		cin>>start[i];
		cin>>finish[i];
	}
	
	
	for(i=0;i<8;i++)
	{
		min=i;
		for(j=i+1;j<8;j++)
		{
			if(finish[min]>finish[j])
			{
				min=j;
			}
		}
		swap(finish[i],finish[min]);
		swap(start[i],start[min]);
		
	}
	/*
	cout<<"\n";
	for(i=0;i<8;i++)
	{
		cout<<start[i]<<" ";
		cout<<finish[i];
		cout<<"\n";
	}*/
	
	j=0;
	for(i=1;i<8;i++)
	{
		if(finish[j]<=start[i])
		{
			count++;
			j=i;
		}
	}
	
	cout<<count<<" jobs can be done\n";
return 0;
}
