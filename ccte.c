#include<stdio.h>
#define MAX 100001

int v[MAX]={0};
int len=0, sp[MAX];
int pr[MAX]={0};

int main()
{
	
	
	//
	
	int t;
	scanf("%d",&t);
	long long int j,i;
	pr[len++] = 2;
	for (i = 2; i < MAX; i += 2)
	{
		sp[i] = 2;
		v[i]=1;
	}
	for (i=3;i<100001;i+=2)
	{
		if (v[i]==0)
		{
			pr[len++] = i;
			sp[i] = i;
			for (j = i; (j*i) < 100001; j += 2)
			{
			
				v[j*i] = 1;
				sp[j*i] = i;
			}
		}
	}
	printf("hello\n");
	while(t--)
	{
		int a,b,p,tmp;
		int k,factors,count=0;
		scanf("%d%d%d",&a,&b,&k);
		if(k==2)
		{
			if(a<6)
			{a=6;}
		}
		else if(k==3)
		{
			if(a<30)
			{a=30;}
		}
		else if(k==4)
		{
			if(a<210)
			{a=210;}
		}
		else if(k==5)
		{
	    	if(a<2310)
			{a=2310;}
		}
		//printf("hello\n");
		for(p=a;p<=b;p++)
		{
			tmp=p;
		int cnt=0;
		while (tmp != 1)
		{
			int s = sp[tmp];
			while ((tmp%s) == 0)	
			{
			tmp /= s;
			}
			 cnt++;
			 if(cnt>k)
			 break;
                        //divide as long as n can be divided by s, then proceed
		}
		//printf("hello\n");
			if(cnt==k)
			count++;
		}
		printf("%d\n",count);
	}
return 0;
}
