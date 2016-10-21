#include<stdio.h>

int countsplit(int **a,int n,int *b,int s1,int *c,int s2)
{
	int k,i,j,count=0;
	i=0;j=0;
	for(k=0;k<n;k++)
	{
		if(b[i]>c[j])
		{
			a[k]=c[j];
			j++;
			count++;
		}
		else
		{
			a[k]=b[i];
			i++;
		}
	}
	for(k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
	printf("%d\n",count);
	return count;
}

int count(int *a,int n)
{
	int x,y,z;
	if(n==1)
	return 0;
	
	x=count(a,n/2);
	y=count(a+n/2,n-n/2);
	z=countsplit(&a,n,a,n/2,a+n/2,n-n/2);
	return (x+y+z);
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int seg[2*n-1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		seg[i+n]=0;
	}
	
	printf("%d\n",count(a,n));
	
return 0;
}
	
