/* merge sort using recursion
 complexity=O(nlogn)
 */


#include<stdio.h>
int a[8];
int merge(int a[],int b,int m,int e);
int merge_sort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
	return 0;
}

int merge(int a[],int b,int m,int e)
{
	int size1=m-b+1;
	int size2=e-m;
	int tmp1[10],tmp2[10];
	int i,j,k;
	for(i=0;i<size1;i++)
	{
		tmp1[i]=a[i+b];
	}
	
	for(j=0;j<size2;j++)
	{
		tmp2[j]=a[j+m+1];
	}
	tmp1[i]=9999;  //to mark end by very large number
	tmp2[j]=9999;  //to mark end by very large number
	i=0;j=0;
	for(k=b;k<=e;k++)                
	{
		if(tmp1[i]<tmp2[j])
		{
			a[k]=tmp1[i++];
		}
		else
		{
			a[k]=tmp2[j++];
		}
	}
return 0;
}


int main()
{
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	
	merge_sort(a,0,7);
	printf("\n");
	for(i=0;i<8;i++)
	{
		printf("%d  ",a[i]);
	}
	
	return 0;
	
}
