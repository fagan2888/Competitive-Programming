#include<stdio.h>
//#include<algorithm>
//#include<vector>
#include<string.h>
//#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;

int c[20000]={0};

int freq[20000]={0};
int ans[20000]={0};
int final1[20000]={0};
//int final2[20000]={0};
bool visit[20000];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		//final.resize(0);
		//printf("size=%d\n",final.size());
		int tmp,n,hq1,hq2,i,j,count1=0;
		scanf("%d%d%d",&n,&hq1,&hq2);
		
		memset(ans,0,sizeof(ans));
		memset(c,0,sizeof(c));
		memset(freq,0,sizeof(freq));
		memset(visit,false,sizeof(visit));
		memset(final1,0,sizeof(final1));
		//memset(final2,0,sizeof(final2));
		
		for(i=0;i<n;i++)
		{
			if(i!=(hq1-1))
			{
				scanf("%d",&c[i]);
				freq[c[i]-1]++;
			}
			else
			c[i]=0;
		}
		
		for(i=0;i<n;i++)
		{
			if(freq[i]==0)
			{
				freq[i]=10000;
				j=i;
				break;
			}
		}
		count1=0;
		while(c[j]!=0)
		{
			visit[j]=true;
			final1[count1]=j+1;
			count1++;
			tmp=c[j];
			j=c[j]-1;
		}
		
		for(i=0;i<n;i++)
		{
			if(freq[i]==0)
			{
				freq[i]=10000;
				j=i;
				break;
			}
		}
		//printf("%d\n",j+1);
		i=n-1;
		while(c[j]!=0)
		{
			visit[j]=true;
			final1[i]=j+1;
			i--;
			tmp=c[j];
			j=c[j]-1;
		}
		final1[i]=tmp;
		/*for(i=count1;i<count1+count2;i++)
		{
			final1[i]=final2[count1+count2-1-i];
		}*/
		
		
		/*for(i=0;i<n;i++)
		{
			printf("%d ",final1[i]);
		}
		printf("\n");*/

		for(i=0;i<n;i++)
		{
			if(final1[i]!=hq2)
			{
				ans[final1[i]-1]=final1[i+1];
			}
			else
			break;
		}
		
		ans[hq2-1]=0;
		for(j=i+1;j<n;j++)
		{
			ans[final1[j]-1]=final1[j-1];
		}
		
		
		
		for(i=0;i<n;i++)
		{
			if(i!=(hq2-1))
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
return 0;
}
