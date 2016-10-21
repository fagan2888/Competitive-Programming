#include<stdio.h>
long long int ab[1000000][2],c[100000],freq[100000]={0},min[100000];
int main()
{
	long long int tmp,n,m,i,j,count=0,sum=0,minsum=0;
	int flag=0;
	scanf("%lld%lld",&n,&m);

	for(i=0;i<m;i++)
	{
		scanf("%lld%lld",&ab[i][0],&ab[i][1]);
		if(freq[ab[i][0]-1]==0 && freq[ab[i][1]-1]==0)
		{
			count++;
			freq[ab[i][0]-1]=count;
			freq[ab[i][1]-1]=count;
			
		}
		else if((freq[ab[i][0]-1]!=0 && freq[ab[i][1]-1]==0))
		{
			freq[ab[i][1]-1]=freq[ab[i][0]-1];
		}
		else if (freq[ab[i][0]-1]==0 && freq[ab[i][1]-1]!=0)
		{
			freq[ab[i][0]-1]=freq[ab[i][1]-1];
		}
			else
		{
			//printf("hello\n");
			if(freq[ab[i][0]-1]<freq[ab[i][1]-1])
			{
				count--;
				tmp=freq[ab[i][1]-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[ab[i][0]-1];
					}
				}
			}
			else if(freq[ab[i][0]-1]>freq[ab[i][1]-1])
			{
				count--;
				tmp=freq[ab[i][0]-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[ab[i][1]-1];
					}
				}
			}
		}
	}
	
	/*for(i=0;i<n;i++)
	{
		printf("%lld ",freq[i]);
	}*/

	for(i=0;i<n;i++)
	{
		scanf("%lld",&c[i]);
	}
	if(n==1)
	{
		printf("0\n");
		return 0;
	}

	//memset(min,1000001,sizeof(min));
	
	for(i=0;i<count;i++)
	{
		min[i]=1000001;
	}
	for(i=0;i<n;i++)
	{
		if(freq[i]==0)
		{
			if(c[i]<0)
			{
				flag=1;
				break;
			}
			sum+=c[i];
		}
		else
		{
			if(min[freq[i]-1]>c[i])
			{
				if(c[i]>=0)
				{
					min[freq[i]-1]=c[i];
				}
			}
		}
	}
	if(flag==1)
	{
		printf("-1\n");
		return 0;
	}
	/*for(i=0;i<count;i++)
	{
		printf("%lld ",min[i]);
	}*/
	
	for(i=0;i<count;i++)
	{
		if(min[i]==1000001)
		{
			flag=1;
			break;
		}
		minsum+=min[i];
	}
	if(flag==0 || (count==1 && sum==0))
	{
		if(count!=1 || sum!=0)
		{
			printf("%lld\n",sum+minsum);
		}
		if(count==1 && sum==0)
		printf("0\n");
	}
	else
	{
		printf("-1\n");
	}
return 0;
}
