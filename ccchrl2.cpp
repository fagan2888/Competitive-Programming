#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[100001];
	int i,j,n;        
	int cf=0,hf=0,ef=0,ff=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='C')
		{
			cf++;
		}
		else if(s[i]=='H')
		{
			if(cf>0 && hf<cf)
			{
				hf++;
			}
		}
		else if(s[i]=='E')
		{
			if(hf>0 && ef<hf)
			{
				ef++;
			}
		}
		else if(s[i]=='F')
		{
			if(ef>0 && ff<ef)
			{
				ff++;
			}
		}
	}
	printf("%d\n",ff);     
return 0;
}
