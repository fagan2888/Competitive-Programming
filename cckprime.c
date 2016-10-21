#include<stdio.h>

//prime upto sqrt(100000)
int p[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313};
int sp[100001]={0};
int primefactors()
{
	int j=0,tmp,i=0,count=0;
	
	for(j=2;j<100001;j++)
	{
		count=0;
		tmp=j;
		for(i=0;p[i]*p[i]<=tmp && i<65;i++)
		{
			if(tmp%p[i]==0)
			{
				while(tmp%p[i]==0)
				{	
					tmp=tmp/p[i];
				}
				count++;
		}
	}
	
	if(tmp>1)
	{
		count++;
	}
	sp[j]=count;
	}
}

int main()
{
	int t;
	primefactors();
	scanf("%d",&t);
	while(t--)
	{
		int a,b,i;
		int k,factors,count=0;
		scanf("%d%d%d",&a,&b,&k);
		
		for(i=a;i<=b;i++)
		{
			if(sp[i]==k)
			count++;
		}
		printf("%d\n",count);
	}
return 0;
}
