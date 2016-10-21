#include<stdio.h>

int ispos(int i)
{
	if(i<0)
	{
		return 0;
	}
	else if(i>0)
	return 1;
}

int main()
{
	int n,i,freqpos=0,freqneg=0;
	scanf("%d",&n);
	int t[n],posnext[n],posprev[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		if(i==0)
		{
			posprev[i]=0;
		}
		else
		{
			posprev[i]=posprev[i]+ispos(i-1);
		}
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			posnext[i]=0;
		}
		else
		{
			posnext[i]=posnext[i]+ispos(i+1);
		}
	}
	
	for(i=0;i<n;i++)
	{
		
	}
	
return 0;
}
