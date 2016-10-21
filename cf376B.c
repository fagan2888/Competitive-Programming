#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,ans=0;
	scanf("%d%d",&n,&m);
	int f[n],i,a,b,c;
	memset(f,0,sizeof(f));
	
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		f[a-1]+=(-1*c);
		f[b-1]+=c;
	}
	
	for(i=0;i<n;i++)
	{
		if(f[i]>0)
		ans+=f[i];
	}
	
	printf("%d\n",ans);
	
return 0;
}
