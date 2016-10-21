#include<stdio.h>
int freq[1000000001]={0};

int main()
{
	int n,d,i,l,count=0,max=0,tmp;
	scanf("%d%d",&n,&d);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&l);
		if(max<l)
		{
			max=l;
		}
		freq[l]++;
	}
	
	for(i=1;i<=max;)
	{
		if(freq[i]==0)
		{
			i++;
			continue;
		}
		else
		{
			tmp=i;
			tmp++;
			while(freq[tmp]==0)
			{
				tmp++;
			}
			if(tmp-i<=d)
			{
				count++;
			}
			freq[i]--;
		}
	}
	printf("%d\n",count);
return 0;
}
