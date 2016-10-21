#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cstring>
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;

int c[20000]={0};
vector< vector<int> > w(20000);
int final[20000]={0};
int ans[20000]={0};

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		//final.resize(0);
		//printf("size=%d\n",final.size());
		int n,hq1,hq2,i,j,count=0;
		scanf("%d%d%d",&n,&hq1,&hq2);
		for(i=0;i<n;i++)
		{
			w[i].resize(0);
		}
		memset(ans,0,sizeof(ans));
		memset(c,0,sizeof(c));
		memset(final,0,sizeof(final));
		
		vector<bool> b(n,false);
		
		for(i=0;i<n;i++)
		{
			if(i!=(hq1-1))
			{
				scanf("%d",&c[i]);
				w[i].push_back(c[i]);
				w[c[i]-1].push_back(i+1);
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
		count=0;
		while(b[j]==false)
		{
			b[j]=true;
			final[count]=j+1;
			count++;
			tr(w[j],it)
			{
				if(b[*it-1]==false)
				{
					j=(*it-1);
					break;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d ",final[i]);
		}
		printf("\n");

		for(i=0;i<n;i++)
		{
			if(final[i]!=hq2)
			{
				ans[final[i]-1]=final[i+1];
			}
			else
			break;
		}
		
		ans[hq2-1]=0;
		for(j=i+1;j<n;j++)
		{
			ans[final[j]-1]=final[j-1];
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
