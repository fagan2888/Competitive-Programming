#include<iostream>
#include<algorithm>
using namespace std;

int a[10];

void print()
{
	int j;
	for(j=0;j<10;j++)
	{
		cout<<a[j]<<" ";     
	}
	printf("\n");
}

int partition(int b,int e)
{
	int i,j,p;
	p=a[b];
	i=b+1;
	for(j=b+1;j<=e;j++)
	{
		if(a[j]<p)
		{
			swap(a[j],a[i]);
			i++;
		}
	}
	swap(a[b],a[i-1]);
	//print();
	return i-1;
}

void quicksort(int beg,int end)
{
	if(beg<end)
	{
	int p;
	p=partition(beg,end);
	quicksort(beg,p-1);
	quicksort(p+1,end);
	}
}



int main()
{
	int i;
	cout<<"enter ten elements\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	quicksort(0,9);
	print();
return 0;
}
