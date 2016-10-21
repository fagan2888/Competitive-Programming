#include<stdio.h>
#include<string.h>
#define size 108   
int freq[2*size+1];
int len[2*size+1];
long int x[105],l[105];
int count[105];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(freq,0,sizeof(freq));
		memset(len,0,sizeof(len));
		memset(count,0,sizeof(count));
		memset(x,0,sizeof(x));
		memset(l,0,sizeof(l));
		
		long int n,i,reach,j;
		
		scanf("%ld",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%ld%ld",&x[i],&l[i]);
			freq[x[i]+size]++;
			len[x[i]+size]=l[i];
		}
		
		for(i=0;i<n;i++)
		{
			reach=x[i]+l[i]-1;
			j=x[i];
			while(j<reach)
			{
				j++;
				if(freq[j+size]>0)
				{
					if((j+len[j+size]-1)>reach)
					{
						reach=j+len[j+size]-1;
					}
					count[i]++;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d ",count[i]+1);
		}
		printf("\n");
	}

return 0;
}
