#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,s,i,x,y,tmp;
		scanf("%d%d%d",&n,&k,&s);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=i+1;
		}
		
		for(x=1;x<n;x++)
		{
			i=x-1;
			y=a[x];
			tmp=b[x];
			while(y<a[i] && i>=0)
			{
				a[i+1]=a[i];
				b[i+1]=b[i];
				i--;
			}
			a[i+1]=y;
			b[i+1]=tmp;
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
	}
return 0;
}
