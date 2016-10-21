#include<stdio.h>
#include<algorithm>
using namespace std;
int pos[1000000]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int j,n,k,i,flag=0,count=0,loc;
		scanf("%d%d",&n,&k);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i!=0)
			{
				if(a[i]<a[i-1])
				{
					flag=1;
				}
			}
		}
		
		if(flag==0)
		{
			printf("0\n");
			continue;
		}
		
		loc=0;
		
		label:
		flag=0;
		i=0;
		
		for(j=1;j<n;j++)
		{
			if(a[j]>=a[j-1] && i<n)
			i++;
			else
			break;
		}
		//printf("i=%d\n",i);
		while(i+(k-1)<=(n-1))
		{
			//printf("i=%d\n",i);
			sort(a+i,a+i+k);
			/*for(j=0;j<n;j++)
			{
				printf("%d ",a[j]);
			}
			printf("\n");*/
			pos[loc]=i+1;
			loc++;
			count++;
			if(i+k<n)
			{
			
				if(a[i+k-1]>a[i+k])
				{
					i=i+(k-1);
				}
				else
				{
					i=i+k-1;
					while(a[i]<=a[i+1] && i+1<n)
					{
						i++;
					}
				}
			}
			else
			{
				i=i+k-1;
			}
		}
		
		if(i<n-1)
		{
			while((i+k-1)!=n-1)
			i--;
			
			sort(a+i,a+n);
			/*for(j=0;j<n;j++)
			{
				printf("%d ",a[j]);
			}
			printf("\n");*/
			pos[loc]=i+1;
			loc++;
			count++;
		}
		
		for(j=1;j<n;j++)
		{
				if(a[j]<a[j-1])
				{
					flag=1;
					break;
				}
		
		}
		if(flag==1)
		{
			goto label;
		}
		
		/*for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");*/
		printf("%d\n",count);
		//printf("loc=%d\n",loc);
		for(i=0;i<loc;i++)
		{
			printf("%d ",pos[i]);
		}
		printf("\n");
		
	}
return 0;
}
