#include<stdio.h>

int main()
{
	int t,a;
	scanf("%d",&t);
	long long int pre[2500];
	pre[0]=1;
	while(t--)
	{
		long long int trace,i,j,k,count=0,save,b,add;
		scanf("%lld",&trace);
		
		for(i=1;i<=(trace/2);i++)
		{
			
			for(j=1;j<i*(trace-i);j++)
			{
				add=0;
				if(j==1)
				{
					add+=2*(i*(trace-i)-1)-1;
				}
				else
				{
					if(j*j>=(i*(trace-i)))
					{
						break;
					}
					k=(i*(trace-i))/j;
					if(j*k==(i*(trace-i)))
					{
						k--;
						add+=((k-j+1)*2-1);
					}
					else
					add+=((k-j+1)*2-1);
				}
				
				if(i==(trace-i))
				{
					count+=add;
				}
				else
				{
					count+=(add*2);
				}
	//	printf("%d\n",count);
			
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
