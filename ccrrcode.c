#include<stdio.h>
#include<string.h>
long int f(long int n,long int k,long int answer,char * o,long int a[])
{
	long int i,j;
	if(k==0)
	return answer;
	if(strcmp(o,"XOR")==0)
	{
		k=k%2;
		if(k==0)
		return answer;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			answer=answer^a[j];
		}
	}
	return answer;
	}
	else if(strcmp(o,"AND")==0)
	{
		if(answer==0)
		return 0;
		k=1;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			answer=answer&a[j];
		}
	}
	return answer;
	}
	else
	{
		k=1;
	for(i=0;i<k;i++)
	{
		
		for(j=0;j<n;j++)
		{
			answer=answer|a[j];
		}
	}
	return answer;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,k,answer,i,z;
		char oper[4];
		scanf("%ld%ld%ld",&n,&k,&answer);
		long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		getchar();
		scanf("%s",oper);
		z=f(n,k,answer,oper,a);
		printf("%ld\n",z);
	}
return 0;
}
