#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[100001];
	bool visit[100001];
	memset(visit,false,sizeof(visit));
	int i,j,len,state=0,posc,posh,pose,posf,count=0,fcount;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]=='C')
		fcount++;
	}
	while(fcount>0)
	{
		for(i=0;i<len;i++)
		{
			if(s[i]=='C' && state=0 && visit[i]=false)
			{
				state=1;
				posc=i;
				visit[i]=true;
				fcount--;
			}
			if(s[i]=='H' && state=1 && visit[i]=false)
			{
				state=2;
				posh=i;
				visit[i]=true;fcount--;
			}
			if(s[i]=='E' && state=2 && visit[i]=false)
			{
				state=3;
				pose=i;visit[i]=true;fcount--;
			}
			if(s[i]=='F' && state=3 && visit[i]=false)
			{
				state=0;
				posf=i;visit[i]=true;fcount--;
				count++;
			}
	
		}
	}
	printf("%d\n",count);
return 0;
}
