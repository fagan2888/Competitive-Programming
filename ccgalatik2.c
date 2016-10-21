#include<stdio.h>
int c[100000],freq[100000]={0},min[100000],sum[100000]={0};
int main()
{
	int cost=0,loc=0,l,n,m,i,j,count=0,minsum=0,tmp,pos=0,posmin=1000001,minimum;
	int flag=0,sumtotal=0,a,b;
	scanf("%d%d",&n,&m);
 
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&a,&b);
		if(freq[a-1]==0 && freq[b-1]==0)
		{
			count++;
			freq[a-1]=count;
			freq[b-1]=count;
			
		}
		else if((freq[a-1]!=0 && freq[b-1]==0))
		{
			freq[b-1]=freq[a-1];
		}
		else if (freq[a-1]==0 && freq[b-1]!=0)
		{
			freq[a-1]=freq[b-1];
		}
		else
		{
			//printf("hello\n");
			if(freq[a-1]<freq[b-1])
			{
				count--;
				tmp=freq[b-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[a-1];
					}
				}
			}
			else if(freq[a-1]>freq[b-1])
			{
				count--;
				tmp=freq[a-1];
				for(j=0;j<n;j++)
				{
					if(freq[j]==tmp)
					{
						freq[j]=freq[b-1];
					}
				}
			}
		}
		
		for(j=0;j<n;j++)
		{
			printf("%d ",freq[j]);
		}
		printf("\n");
	}
	
	/*for(i=0;i<n;i++)
	{
		printf("%d ",freq[i]);
	}*/
 
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	if(n==1)
	{
		printf("0\n");
		return 0;
	}
 
	//memset(min,1000001,sizeof(min));
	
	pos=0;
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
			if(posmin>c[i])
			{
				posmin=c[i];
				loc=pos;
			}
			sum[pos]=c[i];
			sumtotal+=sum[pos];
			pos++;
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
	for(i=0;i<count;i++)
	{
		printf("min[%d]=%d ",i,min[i]);
	}
	for(i=0;i<pos;i++)
	{
		printf("sum[%d]=%d ",i,sum[i]);
	}
	printf("\nposmin=%d\n,pos=%d\n",posmin,pos);
	minimum=posmin;
	for(i=0;i<count;i++)
	{
		if(min[i]==1000001)
		{
			flag=1;
			break;
		}
		if(minimum>min[i])
		{
			minimum=min[i];
			l=i;
		}
		
		minsum+=min[i];
	}
	printf("overall_min=%d\n",minimum);
	printf("sumtotal=%d\nloc=%d\nl=%d\n",sumtotal,loc,l);
	if(minimum==posmin)
	{
		cost=minsum+count*minimum;
		//printf("cost=%d\n",cost);
		for(j=0;j<pos;j++)
		{
			if(j!=loc)
			cost+=(minimum+sum[j]);
		}
	}
	else
	{
		cost=pos*minimum+sumtotal;
		for(j=0;j<count;j++)
		{
			if(j!=l)
			{
				cost+=(minimum+min[j]);
			}
			
		}
	}
	//printf("cost=%d\n",cost);
	
	if(count==1 && pos==0)
	{
		printf("0\n");
		return 0;
	}
	
	
	if(flag==0)
	{
			printf("%d\n",cost);
	}
	else
	{
		printf("-1\n");
	}
return 0;
}
