#include<stdio.h>
#include<math.h>
int top[100000]={0},bot[100000]={0},same[100000]={0};
int main()
{
	int n,i,a,b,count=1000000,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		top[a-1]++;
		bot[b-1]++;
		if(max<a)
		max=a;
		
		if(max<b)
		max=b;
		
		if(a==b)
		{
			same[a-1]++;
		}
	}
	
	for(i=0;i<max;i++)
	{
		if((top[i]+bot[i]-same[i])>=(int)ceil(n/2.0))
		{
			if(top[i]>=(int)ceil(n/2.0))
			{
				count=0;
				break;
			}
			else
			{
				if((((int)ceil(n/2.0))-top[i])<count)
				{
					count=(((int)ceil(n/2.0))-top[i]);
				}
			}
		}
	}
	
	if(count==1000000)
	{
		printf("impossible\n");
	}
	else
	printf("%d\n",count);
	
return 0;
}
