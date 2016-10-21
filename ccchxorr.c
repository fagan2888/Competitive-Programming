#include<stdio.h>
#include<string.h>
int f[50]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		int n,i,num1,num2,num3,flag=0,min=100,max=0,ans,tmp;
		memset(f,0,sizeof(f));
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(max<a[i])
			{
				max=a[i];
			}
			if(min>a[i])
			{
				min=a[i];
			}
			if(a[i]<51)
			{
				f[a[i]-1]++;
			}
		}
		
		num1=max;num2=min;
		ans=num1^num2;
		f[max-1]--;f[min-1]--;
		for(i=num2-1;i<num1;i++)
		{
			if(f[i]!=0 && flag==0)
			{
				tmp=ans^(i+1);
				max=tmp;
				flag=1;
				continue;
			}
			if(f[i]!=0)
			{
				tmp=ans^(i+1);
			}
			if(tmp>max)
			{
				max=tmp;
			}
		}
		printf("%d\n",max);
		
	}
return 0;
}
