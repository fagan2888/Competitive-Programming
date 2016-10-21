#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cstring>
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;

int c[20000]={0};
		

vector< vector<int> > w(20000);
vector<int> final;
int ans[20000]={0};

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		final.clear();
		int n,hq1,hq2,i,j;
		scanf("%d%d%d",&n,&hq1,&hq2);
		for(i=0;i<n;i++)
		{
			w[i].clear();
			//printf("%d ",w[i].size());
		}
		//printf("\n");
		memset(ans,0,sizeof(ans));
		memset(c,0,sizeof(c));
		
		vector<bool> b(n,false);
		
		for(i=0;i<n;i++)
		{
			if(i!=hq1-1)
			{
				scanf("%d",&c[i]);
				w[i].push_back(c[i]-1);
				w[c[i]-1].push_back(i);
			}
			else
			c[i]=0;
		}
		
		/*for(i=0;i<n;i++)
		{
			printf("%d ",i+1);
			tr(w[i],it)
			{
				printf("%d ",*it);
			}
			printf("\n");
		}*/
		
		for(i=0;i<n;i++)
		{
			if(w[i].size()==1)
			{
				j=i;
				break;
			}
		}
		//printf("i=%d\n",i+1);
		while(b[j]==false)
		{
			b[j]=true;
			final.push_back(j);
			tr(w[j],it)
			{
				if(b[*it]==false)
				{
					j=*it;
					break;
				}
			}
		}
		
		/*for(i=0;i<n;i++)
		{
			printf("%d ",final[i]);
		}
		printf("\n");*/

		for(i=0;i<n;i++)
		{
			if((final[i]!=(hq2-1)) && i<n-1)
			{
				ans[final[i]]=final[i+1];
			}
			else
			break;
		}
		
		ans[hq2-1]=0;
		for(j=i+1;j<n;j++)
		{
			ans[final[j]]=final[j-1];
		}
		
		
		
		for(i=0;i<n;i++)
		{
			if(i!=hq2-1)
			printf("%d ",ans[i]+1);
		}
		printf("\n");
	}
return 0;
}
