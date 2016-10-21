#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	freopen("A-small-attempt0.in","r",stdin);
    freopen("aoutp.in","w",stdout);
	int t,num;
	scanf("%d",&t);
	num=t;
	while(t--)
	{
		int n,l,j,flag=0;
		scanf("%d%d",&n,&l);
		char orig[n][l+1],final[n][l+1];
		int onef[l],zerof[l];
		int fo[l],fz[l];
		memset(onef,0,sizeof(onef));
		memset(zerof,0,sizeof(zerof));
		memset(fo,0,sizeof(fo));
		memset(fz,0,sizeof(fz));
		for(int i=0;i<n;i++)
		{
			scanf(" %s",orig[i]);
			for(j=0;j<strlen(orig[i]);j++)
			{
				if(orig[i][j]=='1')
				{
					onef[j]++;
				}
				else
				zerof[j]++;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			scanf(" %s",final[i]);
			for(j=0;j<strlen(final[i]);j++)
			{
				if(final[i][j]=='1')
				{
					fo[j]++;
				}
				else
				fz[j]++;
			}
		}
		
		int count=0;
		for(j=0;j<l;j++)
		{
			if((fo[j]==onef[j]) && (fz[j]==zerof[j]))
			{
				continue;
			}
			else if((fo[j]==zerof[j]) && (fz[j]==onef[j]))
			{
				count++;
			}
			else
			{
				//printf("hi");
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			printf("Case #%d: NOT POSSIBLE\n",num-t);
		}
		else
		{
			printf("Case #%d: %d\n",num-t,count);
		}
	}
return 0;
}
