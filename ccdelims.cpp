#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cstring>
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define rtr(container, it) for(typeof(container.rbegin()) it = container.rbegin(); it != container.rend(); it++) 
using namespace std;
typedef vector<int> vi;

int freq[100001]={0},v[100000]={0},t[100000]={0};
int main()
{
	int n,j,c=0;
	int i,tmp;
	scanf("%d",&n);
	vi a(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[a[i]]++;
	}
	
	c=0;
	i=a.size()-1;
	
	while(i>=0)
	{
		//printf("size=%d\n",i);
		tmp=a[i];
		if(freq[a[i]]==1)
		{
			v[c]=i;
			t[c]=1;
			c++;
			a.erase(a.begin()+i);
		}
		else
		{
			j=find(a.begin(),a.end(),a[i])-a.begin();
			//printf("j=%d\n",j);
			v[c]=j;
			t[c]=i-v[c];
			//printf("v=%d\n",v[c]);
			a.erase(a.begin()+v[c]);
			a.erase(a.begin()+v[c]+t[c]-1);
			c++;
			freq[tmp]-=2;
			//printf("hi\n"); 
		}
		i=a.size()-1;
	}
		

	printf("%d\n",c);
	for(i=0;i<=c-1;i++)
	{
		printf("%d %d\n",v[i]+1,t[i]);
	}
	
return 0;
	
}
