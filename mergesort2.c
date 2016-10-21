/* merge sort using recursion
 complexity=O(nlogn)
 */


#include<stdio.h>
int *f;
void merge(int *,int *,int *,int s1,int s2);
void merge_sort(int *a,int beg,int end)
{
	int mid,i;
	if(beg==end)
	{
		return;
	}
	
	mid=(beg+end)/2;
	merge_sort(a+beg,0,mid-beg);
	merge_sort(a+mid+1,0,end-mid-1);
	merge(a,a+beg,a+mid+1,mid-beg+1,end-mid);
	/*
	for(i=beg;i<=end;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	*/
}

void merge(int *arr,int *a,int *b,int s1,int s2)
{
	int i,j,k,l;
	//printf("%d %d\n",s1,s2);
	for(i=0;i<s1;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<s2;i++)
	{
		printf("%d  ",b[i]);
	}
	printf("\n");
	

	j=0;k=0;
	for(i=0;i<s1+s2;i++)             
	{
		printf("%d %d %d\n",i,j,k);
		if(k>=s2)
		{
			printf("1-%d\n",b[j]);
			arr[i]=a[j];
			j++;
			
			printf("1-%d\n",arr[i]);
			continue;
		}
		else if(j>=s1)
		{
			arr[i]=b[k];
			k++;
			printf("2-%d\n",arr[i]);
			continue;
		}
		else
		{
		if(a[j]<b[k])        
		{
			arr[i]=a[j];
			j++;
		}
		else
		{
			arr[i]=b[k];
			k++;
		}
		printf("3-%d\n",arr[i]);
		}
	}
	
	for(l=0;l<s1+s2;l++)
	{
		printf("%d  ",arr[l]);
	}
	printf("\n");
	
	
	
}

int main()
{
	int i;
	int a[8];
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
