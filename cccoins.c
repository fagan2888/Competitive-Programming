#include<stdio.h>
long long int pre[1000000];

long long int com(long long int i)
{
	if(i<=1000000)
	{
		return pre[i];
	}
	else
	{
		return (com(i/2)+com(i/3)+com(i/4));
	}
}


int main()
{
	long long int i,ans,j;
	for(j=0;j<12;j++)
	{
		pre[j]=j;
	}
	for(j=12;j<=1000000;j++)
	{
		pre[j]=pre[j/2]+pre[j/3]+pre[j/4];
	}
	
	
	while(scanf("%lld",&i)!=EOF)
	{
		printf("%lld\n",com(i));
	}
	
return 0;
}
